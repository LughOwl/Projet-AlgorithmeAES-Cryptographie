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
    ChiffrementAES(const string& nomFichierPourChiffrement, const string& nomFichierChiffre) ;

    void faireChiffrement() const ;




};



#endif //CHIFFREMENTAES_H
