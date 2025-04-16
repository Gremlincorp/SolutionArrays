#include <iostream>
#include <vector>
#include <limits> // ��� std::numeric_limits
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int size;

    // ���� ������� �������
    cout << "������� ���������� ��������� �������: ";
    cin >> size;

    // �������� �� ������������ ����
    if (size <= 0) {
        cout << "���������� ��������� ������ ���� ������ 0." << endl;
        return 1;
    }

    // �������� ������������� ������� � ������� std::vector
    vector<double> array(size);

    // ���� ��������� �������
    for (int i = 0; i < size; i++) {
        cout << "������� ������� " << i + 1 << ": ";
        cin >> array[i];
    }

    // ����� ������� � ������ �������
    cout << "������ � ������ �������: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // ����� ������� � �������� �������
    cout << "������ � �������� �������: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }
    cout << endl;

    // ���������� ����� ��������� �������
    double total_sum = 0;
    double min_value = numeric_limits<double>::max(); // ������������� ������������ ���������
    double max_value = numeric_limits<double>::lowest(); // ������������� ����������� ���������

    for (int i = 0; i < size; i++) {
        total_sum += array[i];
        if (array[i] < min_value) {
            min_value = array[i];
        }
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }

    // ���������� �������� ���������������
    double average = total_sum / size;

    // ����� �����������
    cout << "����� ��������� �������: " << total_sum << endl;
    cout << "������� �������������� ��������� �������: " << average << endl;
    cout << "����������� �������� � �������: " << min_value << endl;
    cout << "������������ �������� � �������: " << max_value << endl;

    return 0;
}
