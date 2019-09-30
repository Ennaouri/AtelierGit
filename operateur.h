//
// Created by bothmena on 27/01/17.
//

#ifndef TD2_OPERATEUR_H
#define TD2_OPERATEUR_H

#include "abonne.h"

class Operateur {

private:
    int taille;
    Abonne* abonnes[20];
    Abonne *chercherAbonne( int );

public:
    Operateur();

    void ajouterAbonne();
    void supprimerAbonne();
    void ajouterSoldeAbonne();
    void consommer();
    void afficher();

    int getTaille() const;

    void setTaille(int taille);

    Abonne *const *getAbonnes() const;
};

#endif //TD2_OPERATEUR_H
