#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle() { a = b = c = d = 0; A = B = C = D = 0; }//������ �����������
Quadrangle::Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_) //����������� �������� ������ 
{
    a = a_;
    b = b_;
    c = c_;
    d = d_;
    A = A_;
    B = B_;
    C = C_;
    D = D_;
    name = "���������������";
}
//������ ��� ��������� ���������� � �������� ������ � �����
int Quadrangle::get_a() { return a; };//����� ���������� �������� ������� a
int Quadrangle::get_b() { return b; };//����� ���������� �������� ������� b
int Quadrangle::get_c() { return c; };//����� ���������� �������� ������� c
int Quadrangle::get_d() { return d; };//����� ���������� �������� ������� d
int Quadrangle::get_A() { return A; };//����� ���������� �������� ���� A
int Quadrangle::get_B() { return B; };//����� ���������� �������� ���� B
int Quadrangle::get_C() { return C; };//����� ���������� �������� ���� C
int Quadrangle::get_D() { return D; };//����� ���������� �������� ���� D

//������������ ����� ��� ������ �������� �� ����� ���������� ������ ���������������
void Quadrangle::printInfo()
{
    std::cout << get_name() << ":" << std::endl;
    std::cout << "�������: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d() << std::endl;
    std::cout << "����: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D() << std::endl;
    std::cout << std::endl;
}
