//
// Created by bothmena on 27/01/17.
//

#ifndef TD2_ABONNE_H
#define TD2_ABONNE_H

#include <iostream>

using namespace std;

class Abonne {

private:
    string nom;
    string prenom;
    int numAppel;
    int cin;
    double solde;

public:
    Abonne();
    void saisir(  );
    void afficher();
    void recharger( double );
    bool consommer( int, float );

    int getCin() const;
};

#endif //TD2_ABONNE_H
