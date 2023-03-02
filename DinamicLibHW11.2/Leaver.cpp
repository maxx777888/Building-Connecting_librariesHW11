#include "Leaver.h"
#include<iostream>



Leaver::Leaver(std::string leaver_name)
{
	leave(leaver_name);
}
void Leaver::leave(std::string leaver_name)
{
	std::cout << "До свидания, " << leaver_name << "!" << std::endl;
}


