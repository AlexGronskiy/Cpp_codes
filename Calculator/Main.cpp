#include <iostream>
#include <clocale> // ���������� ��� ���������� ����������� ������ ������ � �������(+ ����������� ����/������� � ��.)
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    char operation;
    double result;

    cout << "������� ������ �����: ";
    cin >> num1;

    cout << "������� �������� (+, -, *, /, ^): ";
    cin >> operation;

    cout << "������� ������ �����: ";
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
            cout << "������: ������� �� ����!" << endl;
            return 0; // ���������� ��� ������
        }
        break;
//-----------------------------------------------------
    case '^':
        result = std::pow(num1, num2);
        break;
//-----------------------------------------------------
    default:
        cout << "������: �������� ��������!" << endl;
        return 0; // ���������� ��� ������
    }

    cout << "���������: " << result << endl;

    return 0; // ���������� ������� ���, ����� ������� �������� ���������� ���������
}