#pragma once
#include "Figure.h"


class Quadrangle : public Figure
{
public:
    Quadrangle();//������ �����������
    Figure_API Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_); //����������� �������� ������ 
    
    //������ ��� ��������� ���������� � �������� ������ � �����
    int get_a();//����� ���������� �������� ������� a
    int get_b();//����� ���������� �������� ������� b
    int get_c();//����� ���������� �������� ������� c
    int get_d();//����� ���������� �������� ������� d
    int get_A();//����� ���������� �������� ���� A
    int get_B();//����� ���������� �������� ���� B
    int get_C();//����� ���������� �������� ���� C
    int get_D();//����� ���������� �������� ���� D

    //������������ ����� ��� ������ �������� �� ����� ���������� ������ ���������������
    void printInfo() override;
    
protected:
    int a, b, c, d;
    int A, B, C, D;
};

