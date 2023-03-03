#include<iostream>
#pragma once




class Greeter
{
public:

	Greeter(std::string greet_name);//Конструктор, который принимает на вход имя и вызывает метод greet
	void greet(std::string greet_name);//Метод выводит на экран переданное слово в контексте нужного предложения
};

