#include "Octet.h"
using namespace std;
#include <iostream>

Octet::Octet() {

}

Octet::Octet(uint8_t data) {
    this->_data = data;
}

void Octet::setData(uint8_t data) {
    this->_data = data;
}

uint8_t Octet::getData() const {
    return this->_data;
}

void Octet::setBit(int pos, bool val) {
    if(pos < 0 || pos > 7) {
        cout << "Erreur: indice out of borne" << endl;
        return;
    }
    if(val) {
        _data |= (1 << pos);
    }
    else {
        _data |= (0 << pos);
    }
}

bool Octet::getBit(int pos) const {
    if(pos < 0 || pos > 7) {
        cout << "Erreur: indice out of borne" << endl;
        exit(1);
    }
    return (_data >> pos) & 1;
}

Octet& Octet::operator|(const Octet &o) const {
    return Octet(_data | o._data);
}

Octet& Octet::operator&(const Octet &o) const  {
    return Octet(_data  & o._data);
}

Octet& Octet::operator+(const Octet& o) const{
    return Octet(_data ^ o.data);
}

Octet& Octet::operator*(const Octet& o) const{}



