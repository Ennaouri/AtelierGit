// Created by bothmena on 27/01/17.

#include "operateur.h"
#include "abonne.h"

using namespace std;

Operateur::Operateur() {

    this->taille = 0;
}

void Operateur::ajouterAbonne() {

    Abonne *abonne = new Abonne();
    abonne->saisir();

    this->abonnes[this->taille] = abonne;
    this->taille++;
}

Abonne *Operateur::chercherAbonne( int cinAbonne ) {

    for ( int i = 0; i < this->taille; i++ ) {
        if ( this->abonnes[i]->getCin() == cinAbonne ) {
            return this->abonnes[i];
        }
    }
    cout << "Aucun abonné a un n° cin égal à " << cinAbonne << endl;
    return NULL;
}

void Operateur::ajouterSoldeAbonne() {

    int cinAbonne;
    cout << "CIN de l'abonné qui va recharger son compte : ";
    cin >> cinAbonne;
    Abonne *abonne = this->chercherAbonne( cinAbonne );

    if ( abonne != NULL ) {

        double solde;
        cout << "Solde à recharger : ";
        cin >> solde;
        abonne->recharger( solde );
    }
}

void Operateur::consommer() {

    int cinAbonne;
    cout << "CIN de l'abonné qui va communiquer : ";
    cin >> cinAbonne;
    Abonne *abonne = this->chercherAbonne( cinAbonne );

    if ( abonne != NULL ) {

        int secondes;
        float prixMinute;
        cout << "Secondes à consommer : ";
        cin >> secondes;
        cout << "Prix minute : ";
        cin >> prixMinute;
        abonne->consommer( secondes, prixMinute );
    }
}

void Operateur::supprimerAbonne() {

    int cinAbonne;
    cout << "CIN de l'abonné à supprimer : ";
    cin >> cinAbonne;
    Abonne *abonne = this->chercherAbonne( cinAbonne );

    if ( abonne != NULL ) {

        int index;
        for ( int i = 0; i < this->taille; i++ ) {
            if ( this->abonnes[i] == abonne ) {
                index = i;
                break;
            }
        }
        for ( int i = index; i < this->taille; i++ ) {
            this->abonnes[i] = this->abonnes[i+1];
        }
        this->taille--;
    }
}

void Operateur::afficher() {

    for (int i = 0; i < this->taille; i++) {

        this->abonnes[i]->afficher();
        cout << "------------------" << endl;
    }
}

int Operateur::getTaille() const {
    return taille;
}

void Operateur::setTaille(int taille) {
    Operateur::taille = taille;
}

Abonne *const *Operateur::getAbonnes() const {
    return abonnes;
}
