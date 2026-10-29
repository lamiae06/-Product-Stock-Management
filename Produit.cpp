#include "Produit.h"
int Produit::compteurid = 0;
int Produit::nbrProduits = 0;
Produit::Produit(string n, double p, int q, Date d)
	: id(++compteurid),
	nom(n),
	prix(p),
	quantite(q),
	peremption(d)
{
	if (!Date::estvalide(d.getj(), d.getm(), d.geta()))
	{
		cout << "Date invalide !" << endl;
		peremption = Date(1, 1, 2000);
	}

	nbrProduits++;
}

Produit::~Produit()
{
	cout << "Produit supprime" << endl;
	nbrProduits--;
}

Produit::Produit(const Produit& p):
	id(p.id)
{
	this->nom = p.nom;
	this->prix = p.prix;
	this->quantite = p.quantite;
	this->peremption = p.peremption;

}

bool Produit::vendre(int q)
{
	if (q <= 0 || q > quantite) {
		return false;
	}

	quantite -= q;
	return true;
}

int Produit::reapprovionner(int v)
{
	if (v <= 0)
		return quantite;

	quantite += v;
	return quantite;
}

double Produit::valeurstock() const
{
	return prix * quantite;
}

bool Produit::estperime(const Date& d) const
{
	return peremption < d;
}

void Produit::afficher() const
{
	cout << "ID : " << id << endl;
	cout << "Nom : " << nom << endl;
	cout << "Prix : " << prix << " DH" << endl;
	cout << "Quantite : " << quantite << endl;

	cout << "Date de peremption : ";
	peremption.afficher();
}

int Produit::getnbproduits()
{
	return nbrProduits;
}





