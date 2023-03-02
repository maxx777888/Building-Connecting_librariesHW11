#include<iostream>
#pragma once
//#pragma comment (lib, "StaticLibHW11.1.lib")



class Greeter
{
public:

	Greeter(std::string greet_name);//Конструктор, который принимает на вход имя и вызывает метод greet
	void greet(std::string greet_name);//Метод выводит на экран переданное слово в контексте нужного предложения
};

