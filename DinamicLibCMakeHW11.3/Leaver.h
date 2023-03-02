#pragma once
#include<string>
#pragma once

//#ifndef DinamicLibHW11.2_EXPORTS
//#define Leaver_API __declspec(dllexport)
//#else
//#define Leaver_API __declspec(dllimport)
//#endif

class Leaver
{
public:
	/*Leaver_API*/ Leaver(std::string leaver_name);//Конструктор, который принимает на вход имя и вызывает метод leave
	void leave(std::string leaver_name);//Метод выводит на экран переданное слово в контексте нужного предложения
};

