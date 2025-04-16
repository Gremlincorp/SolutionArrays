#include <iostream>
using namespace std;

// Прототипы функций с параметрами по умолчанию
int Sum(int a = 0, int b = 0, int c = 0);     // Сумма трех чисел (по умолчанию 0)
int Difference(int a, int b);                 // Разность двух чисел
int Product(int a, int b);                    // Произведение двух чисел
double Quotient(int a, int b);                // Частное двух чисел

int main() // Изменение на int main() для соответствия стандартам C++
{
    setlocale(LC_ALL, ""); // Установка локали для отображения символов
    cout << "Hello Functions" << endl; // Приветственное сообщение

    int a = 2; // Первое число
    int b = 3; // Второе число
    int c = Sum(a, b, 11); // Вызов функции Sum с параметрами a, b и 11
    cout << a << " + " << b << " = " << c << endl; // Вывод результата сложения

    // Вывод разности, произведения и частного
    cout << a << " - " << b << " = " << Difference(a, b) << endl;
    cout << a << " * " << b << " = " << Product(a, b) << endl;
    cout << a << " / " << b << " = " << Quotient(a, b) << endl;

    // Примеры вызова функции Sum с другими аргументами
    cout << 4 << " + " << 5 << " = " << Sum(4, 5) << endl; // Сложение 4 и 5
    cout << "Sum with default parameters: " << Sum() << endl; // Вызов Sum без параметров (по умолчанию)

    return 0; // Возвращаем 0 для успешного завершения программы
}

// Реализация функции Sum
int Sum(int a, int b, int c)
{
    int res = a + b + c; // Суммируем три числа
    return res; // Возвращаем результат
}

// Реализация функции Difference
int Difference(int a, int b)
{
    return a - b; // Возвращаем разность
}

// Реализация функции Product
int Product(int a, int b)
{
    return a * b; // Возвращаем произведение
}

// Реализация функции Quotient
double Quotient(int a, int b)
{
    return (double)a / b; // Возвращаем частное с преобразованием к типу double
}
