#include "Carrier.hpp"
#include "Aircraft.hpp"

Carrier::Carrier() {
  this->carrierHP = 100;
  this->ammostore = 50;
}

void Carrier::add_aircraft(std::string typeOfFighter) {
  if (typeOfFighter == "f16" ) {
    skyFighters.push_back (new F16);
  }else if ( typeOfFighter == "f35") {
    skyFighters.push_back (new F35);
  }
}

void Carrier::carrier_status() {
  std::cout << "HP: " << carrierHP << " Ammo: " << ammostore << std::endl; 
  for (int i = 0; i < skyFighters.size (); i++) {
   skyFighters[i]->get_status ();
  }  
}

unsigned int* Carrier::fill() {
  for (int i = 0; i < skyFighters.size (); i++) {
    skyFighters[i]->refill (&ammostore);
  }

}

Carrier::~Carrier() { }

