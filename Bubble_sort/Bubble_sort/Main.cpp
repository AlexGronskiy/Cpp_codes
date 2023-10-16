#include <iostream>
#include <cstdlib> // Для функции rand()
#include <ctime>   // Для инициализации генератора случайных чисел
#include <clocale>

using namespace std;

// Функция для генерации случайного массива
void generateRandomArray(int arr[], int n) {
    // Инициализируем генератор случайных чисел текущим временем
    srand(time(0));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Генерируем случайное число от 0 до 99
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
    const int n = 10; // Размер массива
    int arr[n];

    // Генерируем случайный массив
    generateRandomArray(arr, n);

    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}