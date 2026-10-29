#include<iostream>
#include "Date.h"
using namespace std;

Date::Date(int j, int m, int a)
{
	this->jour = j;
	this->mois= m;
	this->annee = a;
}

Date::Date() : jour(1), mois(1), annee(2000)
{
}

bool Date::estBisextile(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) ||( a % 400 == 0)) {
		return true;
	}
	return false;
}

bool Date::estvalide(int  j, int m, int a)
{
	int T[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (estBisextile(a)) {
		T[1] = 29;
	}

	if (m > 0 && m <= 12) {
		if (j > 0 && j <= T[m - 1]) {
			return true;
		}
	}
	return false;
}

void Date::afficher() const
{
	cout << jour << "/" << mois << "/" << annee << endl;
}

bool Date::operator==(const Date& d)
{
	if ((this->jour == d.jour) && (this->mois == d.mois) && (this->annee == d.annee)) {
		return true;
	}
	return false;
}

bool Date::operator<(const Date& d)const
{
	if (this->annee < d.annee)
		return true;

	if (this->annee > d.annee)
		return false;

	if (this->mois < d.mois)
		return true;

	if (this->mois > d.mois)
		return false;

	if (this->jour < d.jour)
		return true;

	return false;
}


Date::~Date()
{
}

int Date::getj()
{
	return jour;
}

int Date::getm()
{
	return mois;
}

int Date::geta()
{
	return annee;
}






