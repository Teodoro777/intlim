#include <cstdlib>
#include <iostream>
#include "IntLim.h"

using namespace std ;

void stampa_age(IntLim age);
 
int main ()
{
	cout << "maledetto faggiano " << endl;

	IntLim age(0,99,18);
	
	stampa_age(age);

	return 0;
}

void stampa_age(IntLim age)
{
        cout <<"age: " << age.get() << endl;
}


 
