

#ifndef OCTET_H
#define OCTET_H
#include <cstdint>
class Octet{
  private:
    uint8_t data;
  public:
     Octet();
     Octet(uint8_t data);
     void setData(uint8_t data);
     uint8_t getData() const ;
     void setBit(int pos,bool val);
     bool getBit() const;
};
#endif //OCTET_H
