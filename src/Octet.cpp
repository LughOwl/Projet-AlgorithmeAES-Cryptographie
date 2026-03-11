#include "Octet.h"

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

}







