//
// Created by hugov on 11/03/2026.
//

#ifndef MOT_H
#define MOT_H
#include "Octet.h"


class Mot {
private:
    Octet _octets[4];
public:
    Mot(const Octet octets[4]);
    const Octet* getMot()const;
    void setMot(const Octet octets[4]);
    Octet getOctet(int pos)const;
    void setOctet(int pos, const Octet& o);
};



#endif //MOT_H
