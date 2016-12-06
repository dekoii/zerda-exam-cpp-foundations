#include "Aircraft.hpp"


std::string Aircraft::get_type() {
    return "Type: " + type;
  }

void Aircraft::get_status(){
  std::cout << "Type: " << type << " Ammo: " << ammo << " Base Damage: " 
            << damage << " Total damage: " << ammo*damage;
}

int Aircraft::fight() {
  unsigned int damageDone = ammo * damage;
  this->ammo = 0;
  return damageDone;
}

unsigned int* Aircraft::refill(unsigned int &a) {
  if (a < ammoCapacity) {
    this->ammo = a;
    a = 0;
  }else {
    a = a - ammoCapacity;
    this->ammo = ammoCapacity;
  }
  return &a;
}

Aircraft::Aircraft() {
  this->ammo = 0;
  this->type = "";
  this->damage = 30;
}

Aircraft::~Aircraft() { }

