#include <iostream>
using namespace std;

// ��������� ������� � ����������� �� ���������
int Sum(int a = 0, int b = 0, int c = 0);     // ����� ���� ����� (�� ��������� 0)
int Difference(int a, int b);                 // �������� ���� �����
int Product(int a, int b);                    // ������������ ���� �����
double Quotient(int a, int b);                // ������� ���� �����

int main() // ��������� �� int main() ��� ������������ ���������� C++
{
    setlocale(LC_ALL, ""); // ��������� ������ ��� ����������� ��������
    cout << "Hello Functions" << endl; // �������������� ���������

    int a = 2; // ������ �����
    int b = 3; // ������ �����
    int c = Sum(a, b, 11); // ����� ������� Sum � ����������� a, b � 11
    cout << a << " + " << b << " = " << c << endl; // ����� ���������� ��������

    // ����� ��������, ������������ � ��������
    cout << a << " - " << b << " = " << Difference(a, b) << endl;
    cout << a << " * " << b << " = " << Product(a, b) << endl;
    cout << a << " / " << b << " = " << Quotient(a, b) << endl;

    // ������� ������ ������� Sum � ������� �����������
    cout << 4 << " + " << 5 << " = " << Sum(4, 5) << endl; // �������� 4 � 5
    cout << "Sum with default parameters: " << Sum() << endl; // ����� Sum ��� ���������� (�� ���������)

    return 0; // ���������� 0 ��� ��������� ���������� ���������
}

// ���������� ������� Sum
int Sum(int a, int b, int c)
{
    int res = a + b + c; // ��������� ��� �����
    return res; // ���������� ���������
}

// ���������� ������� Difference
int Difference(int a, int b)
{
    return a - b; // ���������� ��������
}

// ���������� ������� Product
int Product(int a, int b)
{
    return a * b; // ���������� ������������
}

// ���������� ������� Quotient
double Quotient(int a, int b)
{
    return (double)a / b; // ���������� ������� � ��������������� � ���� double
}
