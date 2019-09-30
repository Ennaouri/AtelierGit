#include <iostream>
#include "abonne.h"
#include "operateur.h"

using namespace std;

void showMenu();

int main() {

    int choice;
    Operateur *operateur = new Operateur();
    showMenu();
    do {

        cin >> choice;

        if ( choice > 2 && operateur->getTaille() == 0 ) {

            cout << "La liste des abonn�s est vide!" << endl;
            cout << "Veuillez ajouter quelques abonn�s avant." << endl;
            continue;
        }
        switch ( choice ) {

            case 0:
                cout << "Vous avez quitter le programme" << endl;
                break;
            case 1:
                operateur->ajouterAbonne();
                break;
            case 2:
                operateur->supprimerAbonne();
                break;
            case 3:
                operateur->ajouterSoldeAbonne();
                break;
            case 4:
                operateur->consommer();
                break;
            case 5:
                operateur->afficher();
                break;
            default:
                cout << "Mauvais Choix!!!" << endl;
                showMenu();
                break;
        }

    } while ( choice != 0 );

    return 0;
}

void showMenu() {

    cout << "Choisir Une parmi ces options:" << endl;
    cout << "1: Ajouter un abonn�" << endl;
    cout << "2: Supprimer n abonn�" << endl;
    cout << "3: Rechrger le compte d'un abonn�" << endl;
    cout << "4: Calculer la consommation d'un abonn�" << endl;
    cout << "5: Afficher la liste des abonn�s" << endl;
    cout << "0: Quitter" << endl;
}
