#include "Greeter.h"
#include <iostream>

Greeter::Greeter(std::string greet_name)
{
	Greeter::greet(greet_name);
}

void Greeter::greet(std::string greet_name)
{
	std::cout << "������������, " << greet_name << "!" << std::endl;
}
