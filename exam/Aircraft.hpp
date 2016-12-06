#ifndef AIRCRAFT_HPP
#define AIRCRAFT_HPP

#include <iostream>
#include <string>


class Aircraft {
public:
  std::string get_type();
  void get_status();
  int fight();
  unsigned int* refill(unsigned int &);
  Aircraft();
  virtual ~Aircraft();
  
protected:
  std::string type;
  unsigned int ammo;
  unsigned int damage;
  unsigned int ammoCapacity;
  
private:

};

#endif /* AIRCRAFT_HPP */

