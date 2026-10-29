#include <iostream>
#include "Date.h"
#include "Produit.h"

using namespace std;

int main()
{
    Date d1(1, 1, 2027);

    Produit p1("phone", 26000.00, 20, d1);

    cout << "----- PRODUIT -----" << endl;
    p1.afficher();

    cout << "\nValeur du stock : "
        << p1.valeurstock() << " DH" << endl;


    Date d2(2, 3, 2026);

    cout << "\n----- TEST PEREMPTION -----" << endl;

    if (p1.estperime(d2))
        cout << "Le produit est perime." << endl;
    else
        cout << "Le produit n'est pas perime." << endl;


    cout << "\n----- REAPPROVISIONNEMENT -----" << endl;

    p1.reapprovionner(5);
    p1.afficher();


    cout << "\n----- VENTE -----" << endl;

    if (p1.vendre(5))
        cout << "Vente acceptee." << endl;
    else
        cout << "Vente refusee." << endl;

    p1.afficher();


    cout << "\n----- VENTE REFUSEE -----" << endl;

    if (p1.vendre(50))
        cout << "Vente acceptee." << endl;
    else
        cout << "Vente refusee." << endl;


    cout << "\nNombre de produits : "
        << Produit::getnbproduits() << endl;


    return 0;
}