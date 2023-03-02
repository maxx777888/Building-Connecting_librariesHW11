#pragma once
#include <string>

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
void print_info(Figure* x);