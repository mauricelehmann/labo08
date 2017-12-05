/*
 -----------------------------------------------------------------------------------
 Laboratoire : 08
 Fichier     : saisie.h
 Auteur(s)   : Maurice Lehmann et Alexandre Marques
 Date        : 05.12.2017

 But         : Déclaration des fonctions et constantes de saisie.cpp 
 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
*/

#ifndef SAISIE_H
#define SAISIE_H

   #include <cstdlib>  // Pour exit_success
   #include <iostream> // Pour les entrées et sorties
   #include <limits>   // Pour vider le buffer
   #define VIDER_BUFFER if(cin.fail()) cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n')
      
   using namespace std ;

    /**
    * Contrôle d'une valeur entre deux bornes
    * @param valeur : Valeur à tester
    * @param limiteInf , limiteSup : Borne inferieur et borne supérieur
    * @param message : Message personnalisé
    * @return true si la valeur est plus grande que limiteInf et plus petite que limiteSup, sinon false.
    */
   bool controleSaisie( int valeur , unsigned int limiteInf , unsigned limiteSup , string message);
   
   /**
    * Demande à l'utlisateur si il veut recommencer le programme ( "O" pour oui , ou "N" pour non )
    * @return true si l'utilisateur entre "O" , false si l'utilisateur entre "N"
    */
   bool recommencerProgramme();

#endif /* SAISIE_H */

