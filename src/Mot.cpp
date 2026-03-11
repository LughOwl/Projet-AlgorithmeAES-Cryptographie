//
// Created by hugov on 11/03/2026.
//

#include "Mot.h"

#include <iostream>
using namespace std;
Mot::Mot(const Octet octets[4]){
  setMot(octets);
}

const Octet* Mot::getMot() const{
  return _octets;
}

void Mot::setMot(const Octet octets[4]) {
  for(int i = 0 ; i < 3 ; i++){
    _octets[i] = octets[i];
  }
}

Octet Mot::getOctet(int pos) const {
  if(pos < 0 || pos > 3) {
    cout << "Erreur pos impossible" << endl;
    exit(1);
  }
  return _octets[pos];
}

void Mot::setOctet(int pos, const Octet & o){
  if(pos < 0 || pos > 3) {
    cout << "Erreur pos impossible" << endl;
    exit(1);
  }
  _octets[pos] = o;
}

