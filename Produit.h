#pragma once
#include<iostream>
#include "Date.h"
using namespace std;
class Produit
{
	const int id;
	string nom;
	double prix;
	int quantite;
	Date peremption;
	static int compteurid;
	static int nbrProduits;
public:
	Produit(string, double, int, Date);
	~Produit();
	Produit(const Produit&p);
	bool vendre(int);
	int reapprovionner(int);
	double valeurstock()const;
	bool estperime(const Date& d) const;
	void afficher() const;
	static int getnbproduits();
	Produit& operator=(const Produit&) = delete;

};

