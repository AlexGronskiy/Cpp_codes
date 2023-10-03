#include <iostream>
#include <clocale> // Библиотека для грамотного отображения разных языков в консоли(+ отображение даты/времени и тд.)
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    char operation;
    double result;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите операцию (+, -, *, /, ^): ";
    cin >> operation;

    cout << "Введите второе число: ";
    cin >> num2;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
//-----------------------------------------------------
    case '-':
        result = num1 - num2;
        break;
//-----------------------------------------------------
    case '*':
        result = num1 * num2;
        break;
//-----------------------------------------------------
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            cout << "Ошибка: деление на ноль!" << endl;
            return 0; // Возвращаем код ошибки
        }
        break;
//-----------------------------------------------------
    case '^':
        result = std::pow(num1, num2);
        break;
//-----------------------------------------------------
    default:
        cout << "Ошибка: неверная операция!" << endl;
        return 0; // Возвращаем код ошибки
    }

    cout << "Результат: " << result << endl;

    return 0; // Возвращаем нулевой код, чтобы указать успешное выполнение программы
}