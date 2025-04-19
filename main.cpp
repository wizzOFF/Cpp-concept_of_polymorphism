
#include <iostream>
#include "Vehicule.hpp"

//void presenter(Vehicule v)  //Présente le véhicule passé en argument
void presenter(Vehicule const& v)  //Présente le véhicule passé en argument
{
    v.affiche();
}

int main()
{
    /*
    Vehicule v;
    v.affiche();    //Affiche "Ceci est un vehicule."

    Moto m;
    m.affiche();    //Affiche "Ceci est une moto."
    */

    Vehicule v;
    presenter(v);

    Moto m;
    presenter(m);

    return 0;
}