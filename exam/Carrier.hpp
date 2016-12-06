#ifndef CARRIER_HPP
#define CARRIER_HPP

#include <string>
#include <vector>
#include "Aircraft.hpp"
#include "F16.h"
#include "F35.hpp"

class Carrier {
public:
  
  void add_aircraft(std::string type);
  unsigned int fill();
  int fight();
  void carrier_status();
  int carrierHP;
  Carrier();
  virtual ~Carrier();
  unsigned int ammostore;
private:
  std::vector<Aircraft*> skyFighters;
  
};

#endif /* CARRIER_HPP */