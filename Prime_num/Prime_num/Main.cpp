#include <iostream>
#include <clocale>

using namespace std;

// Функция для проверки, является ли число простым
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

    cout << "Введите начальное значение диапазона: ";
    cin >> start_num;

    cout << "Введите конечное значение диапазона: ";
    cin >> end_num;

    cout << "Простые числа в диапазоне от " << start_num << " до " << end_num << ":\n";

    for (int i = start_num; i <= end_num; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}