#include <iostream>
#include <cstdlib> // ��� ������� rand()
#include <ctime>   // ��� ������������� ���������� ��������� �����
#include <clocale>

using namespace std;

// ������� ��� ��������� ���������� �������
void generateRandomArray(int arr[], int n) {
    // �������������� ��������� ��������� ����� ������� ��������
    srand(time(0));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // ���������� ��������� ����� �� 0 �� 99
    }
}

void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    const int n = 10; // ������ �������
    int arr[n];

    // ���������� ��������� ������
    generateRandomArray(arr, n);

    cout << "�������� ������: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "��������������� ������: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}