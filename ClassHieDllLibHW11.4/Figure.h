#pragma once
#include <string>

#ifndef ClassHieDllLibHW114_EXPORTS
#define Figure_API __declspec(dllexport)
#else
#define Figure_API __declspec(dllimport)
#endif

class Figure //������� ����� ������
{
public:
    //����� ���������� �������� ������
    std::string get_name();
    //����������� ����� ��� ������ �������� �� �����
    virtual void printInfo() = 0;

protected:
    std::string name = "������";//�������� �������� ������ 
};
//�������, ������� �� ����� ��������, ������������ ������ �� �������� ������ ������
Figure_API void print_info(Figure* x);