// Created by bothmena on 27/01/17.

#include <iostream>
#include <limits>
#include "abonne.h"

Abonne::Abonne() {

    this->nom = "";
    this->prenom = "";
    this->numAppel = 0;
    this->cin = 0;
    this->solde = 0;
    this->mwallet=false;
}
void Abonne::saisir(  ) {

    std::cout << "Ajout d'un nouvel abonne..." << endl;

    std::cout << "Nom : ";
    std::cin >> this->nom;
    /*std::cin.clear();
    std::cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );*/
    std::cout << "Prenom : ";
    std::cin >> this->prenom;
//    getline( std::cin, this->prenom );

    std::cout << "Numéro Appel : ";
    std::cin >> this->numAppel;
    std::cout << "CIN : ";
    std::cin >> this->cin;
    std::cout << "Solde (DT): ";
    std::cin >> this->solde;
}

void Abonne::afficher() {

    std::cout << "Nom : " << this->nom << endl;
    std::cout << "Prenom : " << this->prenom << endl;
    std::cout << "Numéro Appel : " << this->numAppel << endl;
    std::cout << "CIN : " << this->cin << endl << endl;
    std::cout << "Solde (DT): " << this->solde << endl;
}

void Abonne::recharger( double aAjouter ) {

    this->solde += aAjouter;
}

bool Abonne::consommer( int secondes = 12, float prixMinute = 0.18 ) {

    double cost = prixMinute * secondes / 60;
    if ( this->solde > cost ) {

        this->solde -= cost;
        cout << "vous avez consommé " << cost << endl;
        return true;
    }
    cout << "vous devez recharger votre compte." << endl;
    return false;
}

int Abonne::getCin() const {
    return cin;
}
