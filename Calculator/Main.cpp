#include <iostream>
#include <clocale> // Библиотека для грамотного отображения разных языков в консоли(+ отображение даты/времени и тд.)
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    char operation;
    double result;

    cout << "Ââåäèòå ïåðâîå ÷èñëî: ";
    cin >> num1;

    cout << "Ââåäèòå îïåðàöèþ (+, -, *, /, ^): ";
    cin >> operation;

    cout << "Ââåäèòå âòîðîå ÷èñëî: ";
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
            cout << "Îøèáêà: äåëåíèå íà íîëü!" << endl;
            return 0; // Возвращаем код ошибки
        }
        break;
//-----------------------------------------------------
    case '^':
        result = std::pow(num1, num2);
        break;
//-----------------------------------------------------
    default:
        cout << "Îøèáêà: íåâåðíàÿ îïåðàöèÿ!" << endl;
        return 0; // Возвращаем код ошибки
    }

    cout << "Ðåçóëüòàò: " << result << endl;

    return 0; // Возвращаем нулевой код, чтобы указать успешное выполнение программы
}
