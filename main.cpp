
#include <iostream>
#include "Vehicule.hpp"

//void presenter(Vehicule v)  //Présente le véhicule passé en argument
/*
void presenter(Vehicule const& v)  //Présente le véhicule passé en argument
{
    v.affiche();
}
*/

int main()
{
    /*
    Vehicule v;
    v.affiche();    //Affiche "Ceci est un vehicule."

    Moto m;
    m.affiche();    //Affiche "Ceci est une moto."
    */

    Vehicule *v(0);
    v = new Voiture;
    //On crée une Voiture et on met son adresse dans un pointeur de Vehicule

    v->affiche();  //On affiche "Ceci est une voiture."

    delete v;      //Et on détruit la voiture

    /*
    Vehicule v;
    presenter(v);

    Moto m;
    presenter(m);
    */

    return 0;
}