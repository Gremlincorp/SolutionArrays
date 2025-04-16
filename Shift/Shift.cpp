#include <iostream>
using namespace std;

#define tab "\t"

int main() {
    setlocale(LC_ALL, "");

    const int SIZE = 15;
    int arr[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };

    int number_of_shifts;
    cout << "¬ведите количество сдвигов: ";
    cin >> number_of_shifts;

    // ”меньшаем количество сдвигов, если оно больше размера массива
    number_of_shifts %= SIZE;

    for (int i = 0; i < number_of_shifts; i++) {
        int buffer = arr[0];
        for (int j = 1; j < SIZE; j++) {
            arr[j - 1] = arr[j];
        }
        arr[SIZE - 1] = buffer;

        // ¬ыводим массив после каждого сдвига
        for (int k = 0; k < SIZE; k++) {
            cout << arr[k] << tab;
        }
        cout << endl;
    }

    cout << " онечный массив после сдвигов: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << tab;
    }
    cout << endl;

    return 0; // ¬озвращаем 0, чтобы обозначить успешное завершение программы
}

