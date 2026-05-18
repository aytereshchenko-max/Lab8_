#include <iostream>
#include <string>
#include "array_utils.h"
#include "matrix_utils.h"

using namespace std;

void task1();
void task2();
void task3();

int main()
{
    int choice;

    do
    {
        cout << "\n===================================\n";
        cout << "1 - Завдання 1 (Array101 - вставка 0 перед K)\n";
        cout << "2 - Завдання 2 (Matrix23 - мінімум у кожному рядку)\n";
        cout << "3 - Завдання 3 (Бінарне сортування вставками, зростання, char)\n";
        cout << "0 - Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 0:
            cout << "Вихід.\n";
            break;
        default:
            cout << "Помилка!\n";
        }

    } while (choice != 0);

    return 0;
}

void task1()
{
    string inFile, outFile;
    int arr[MAX];
    int n, k;

    cout << "Введіть ім'я вхідного файлу: ";
    cin >> inFile;

    cout << "Введіть ім'я вихідного файлу: ";
    cin >> outFile;

    getArray(inFile, arr, n);

    cout << "\nПочатковий масив:\n";
    printArray(arr, n);

    cout << "Введіть K (1 ≤ K ≤ N): ";
    cin >> k;

    if (k < 1 || k > n)
    {
        cout << "Помилка: K має бути від 1 до " << n << endl;
        return;
    }

    insertZeroBeforeK(arr, n, k);

    cout << "\nЗмінений масив:\n";
    printArray(arr, n);

    saveArray(outFile, arr, n);
}

void task2()
{
    string fileName;
    int matrix[MAX][MAX];
    int m, n;

    cout << "Введіть ім'я файлу: ";
    cin >> fileName;

    getMatrix(fileName, matrix, m, n);

    cout << "\nМатриця:\n";
    printMatrix(matrix, m, n);

    findRowMin(matrix, m, n);
}

void task3()
{
    string inFile, outFile;
    char arr[MAX];
    int n;

    cout << "Введіть ім'я вхідного файлу: ";
    cin >> inFile;

    cout << "Введіть ім'я вихідного файлу: ";
    cin >> outFile;

    getCharArray(inFile, arr, n);

    cout << "\nПочатковий масив:\n";
    printCharArray(arr, n);

    binaryInsertionSortAsc(arr, n);

    cout << "\nВідсортований масив (зростання):\n";
    printCharArray(arr, n);

    saveCharArray(outFile, arr, n);
}
