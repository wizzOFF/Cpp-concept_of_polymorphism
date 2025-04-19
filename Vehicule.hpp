
#ifndef Vehicule_hpp
#define Vehicule_hpp

#include <iostream>

class Vehicule
{
    public:
    void affiche() const;  //Affiche une description du Vehicule
    //virtual void affiche() const;  //Affiche une description du Vehicule

    protected:
    int m_prix;  //Chaque véhicule a un prix
};

class Voiture : public Vehicule //Une Voiture EST UN Vehicule
{
    public:
    void affiche() const;
    //virtual void affiche() const;

    private:
    int m_portes;  //Le nombre de portes de la voiture
};

class Moto : public Vehicule  //Une Moto EST UN Vehicule
{
    public:
    void affiche() const;
    //virtual void affiche() const;
 
    private:
    double m_vitesse;  //La vitesse maximale de la moto
};