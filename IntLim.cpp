#include <iostream>
#include "IntLim.h"

using namespace std;

IntLim::IntLim(int min, int max, int value)
{
	cout << "Costruttore di intlim" <<endl;
	
	this->min = min;
	this->max = max;
	this->value = new int;
	*(this->value) = value;
}

IntLim::IntLim(const IntLim& other)
{
	this->value = new int;
	*(this->value) = *(other.value);
}

IntLim::~IntLim()
{
	cout <<"Distruttore di intlim" << endl;
	delete this->value;
}

void IntLim::set(int value)
{
	if (value >= this->min && value <= this->max)
	*(this->value) = value;
}

int IntLim::get()
{	
	return *(this->value);
}
