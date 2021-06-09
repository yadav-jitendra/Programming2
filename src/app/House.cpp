
#include "House.h"

#include <iostream>
using std::cout;
using std::endl;

House::House(int noOfPersons)
:noOfResidents(noOfPersons)
{
}

void House::ringBell() {
    cout << ((noOfResidents != 0)? "Hello there" : "No ones in the House") << endl;
}
