#include <iostream>
#include <vector>
#include <limits> // для std::numeric_limits
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int size;

    // Ввод размера массива
    cout << "Введите количество элементов массива: ";
    cin >> size;

    // Проверка на некорректный ввод
    if (size <= 0) {
        cout << "Количество элементов должно быть больше 0." << endl;
        return 1;
    }

    // Создание динамического массива с помощью std::vector
    vector<double> array(size);

    // Ввод элементов массива
    for (int i = 0; i < size; i++) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> array[i];
    }

    // Вывод массива в прямом порядке
    cout << "Массив в прямом порядке: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Вывод массива в обратном порядке
    cout << "Массив в обратном порядке: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Вычисление суммы элементов массива
    double total_sum = 0;
    double min_value = numeric_limits<double>::max(); // инициализация максимальным значением
    double max_value = numeric_limits<double>::lowest(); // инициализация минимальным значением

    for (int i = 0; i < size; i++) {
        total_sum += array[i];
        if (array[i] < min_value) {
            min_value = array[i];
        }
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }

    // Вычисление среднего арифметического
    double average = total_sum / size;

    // Вывод результатов
    cout << "Сумма элементов массива: " << total_sum << endl;
    cout << "Среднее арифметическое элементов массива: " << average << endl;
    cout << "Минимальное значение в массиве: " << min_value << endl;
    cout << "Максимальное значение в массиве: " << max_value << endl;

    return 0;
}
