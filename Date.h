#pragma once
class Date
{
	int jour;
	int mois;
	int annee;
public:
	Date(int, int, int);
	Date();
	~Date();
	static bool estBisextile(int);
	static bool estvalide(int, int, int);
	void afficher()const;
	bool operator==(const Date& d);
	bool operator < (const Date & d)const;
	int getj();
	int getm();
	int geta();
};

