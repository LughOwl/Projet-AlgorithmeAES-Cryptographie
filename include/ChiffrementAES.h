#ifndef CHIFFREMENTAES_H
#define CHIFFREMENTAES_H

#include <string>
using namespace std;

class ChiffrementAES {
private:
    string _nomDuFichierPourChiffrement;
    string _nomDuFichierChiffre;
public:
    /**
    * @brief Constructeur pour chiffrer un fichier avec la méthode AES-128
    *
    * @param nomFichierPourChiffrement Nom du fichier qui doit etre chiffre dans le dossier data
    * @param nomFichierChiffre Nom du fichier qui va etre cree et contenant le chiffrement avec AES-128
    */
    ChiffrementAES(const string& nomFichierPourChiffrement, const string& nomFichierChiffre) {
        this->_nomDuFichierPourChiffrement = nomFichierPourChiffrement;
        this->_nomDuFichierChiffre = nomFichierChiffre;
        gestionChiffrementAES(nomFichierPourChiffrement, nomFichierChiffre);
    }

    void gestionChiffrementAES(string nFichierNC, string nFichierC) {
        //Chargement du fichier

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

};



#endif //CHIFFREMENTAES_H
