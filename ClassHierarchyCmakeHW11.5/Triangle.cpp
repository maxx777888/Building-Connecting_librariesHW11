#include "Triangle.h"
#include <iostream>

Triangle::Triangle() { a = b = c = 0; A = B = C = 0; }//������ �����������
Triangle::Triangle(int a_, int b_, int c_, int A_, int B_, int C_) //����������� �������� ������ 
{
    a = a_;
    b = b_;
    c = c_;
    A = A_;
    B = B_;
    C = C_;
    name = "�����������";
}
//������ ��� ��������� ���������� � �������� ������ � ����� ������������
int Triangle::get_a() { return a; };//����� ���������� �������� ������� a
int Triangle::get_b() { return b; };//����� ���������� �������� ������� b
int Triangle::get_c() { return c; };//����� ���������� �������� ������� c
int Triangle::get_A() { return A; };//����� ���������� �������� ���� A
int Triangle::get_B() { return B; };//����� ���������� �������� ���� B
int Triangle::get_C() { return C; };//����� ���������� �������� ���� C

//������������ ����� ��� ������ �������� �� ����� ���������� ������ �����������
void Triangle::printInfo() 
{
    std::cout << get_name() << ":" << std::endl;
    std::cout << "�������: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
    std::cout << "����: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
    std::cout << std::endl;
}
