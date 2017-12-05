#ifndef SIMULATION_H
#define SIMULATION_H

//#include "aleatoire.h"
#include <random>
#include <ctime>

#include <iostream>
#include <iomanip>


using namespace std ; 



void initialisationPosition( int& positionX , int& positionY  , int& nbMouvement , int& status );
void avancerCase( int& positionX , int& positionY ) ;
void controleCase( int positionX , int positionY , int& status );
void lancerSimulation( int& positionX , int& positionY , int& status , int& nbMouvement , int map[][5] , int tailleMap );

#endif /* SIMULATION_H */

