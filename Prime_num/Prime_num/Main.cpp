#include <iostream>
#include <clocale>

using namespace std;

// ������� ��� ��������, �������� �� ����� �������
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int start_num, end_num;

    cout << "������� ��������� �������� ���������: ";
    cin >> start_num;

    cout << "������� �������� �������� ���������: ";
    cin >> end_num;

    cout << "������� ����� � ��������� �� " << start_num << " �� " << end_num << ":\n";

    for (int i = start_num; i <= end_num; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}