#include "../include/ChiffrementAES.h"

#include <fstream>
#include <iostream>

ChiffrementAES::ChiffrementAES(const string& nomFichierPourChiffrement, const string& nomFichierChiffre) {
    this->_nomDuFichierPourChiffrement = nomFichierPourChiffrement;
    this->_nomDuFichierChiffre = nomFichierChiffre;
}

void ChiffrementAES::faireChiffrement() const{
    //Chargement du fichier
    string chaine = "../data/"+_nomDuFichierPourChiffrement;

    ifstream fichier(chaine,ios::in);
    if(!fichier.is_open()) {
        cout << "Erreur: impossible d'ouvrir le fichier " + chaine << endl;
    }

    //Initialisation de la variable state
    Octet state[4][4];


    //Boucle While pour traiter le message par bloc de 128 bits (4 mots de 32 bits)
    //Generation des cles de ronde (p23 du poly)
    //Chiffrement du bloc (p28 du poly)


    //Cle traitee par mots de 32 bits avec Nk = 4 pour AES-128

    // 10 rondes pour AES-128, Nr=10

    //Classe octet(contient 8 bits)
    //Operateur + pour XOR
    //Operateur * pour multiplication puis réduction par m(x) pour degré <= 7

    //Classe mot(contient 4 octets)

}

