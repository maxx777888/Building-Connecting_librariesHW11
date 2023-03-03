#pragma once
#include "Figure.h"

#ifndef ClassHieDllLibHW114_EXPORTS
#define Figure_API __declspec(dllexport)
#else
#define Figure_API __declspec(dllimport)
#endif


class Triangle : public Figure//������� ������� ����� ����������� 
{
public:
    Triangle();//������ �����������
    Figure_API Triangle(int a_, int b_, int c_, int A_, int B_, int C_); //����������� �������� ������ 
    //������ ��� ��������� ���������� � �������� ������ � ����� ������������
    int get_a();//����� ���������� �������� ������� a
    int get_b();//����� ���������� �������� ������� b
    int get_c();//����� ���������� �������� ������� c
    int get_A();//����� ���������� �������� ���� A
    int get_B();//����� ���������� �������� ���� B
    int get_C();//����� ���������� �������� ���� C

    //������������ ����� ��� ������ �������� �� ����� ���������� ������ �����������
    void printInfo() override;
   
protected:
    int a, b, c;//�������� ������
    int A, B, C;//�������� �����
};

