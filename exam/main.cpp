#include <vector>
#include "Aircraft.hpp"
#include "F16.h"
#include "F35.hpp"
#include "Carrier.hpp"
using namespace std;


int main(int argc, char** argv) {
 
  Carrier eisenhover;

  eisenhover.add_aircraft ("f16");
  eisenhover.carrier_status ();
  
  
  return 0;
}

