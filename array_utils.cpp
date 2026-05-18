#include "array_utils.h"
#include <fstream>
#include <iostream>

using namespace std;

// ============ ЗАВДАННЯ 1 ============
void getArray(string filename, int arr[], int& n)
{
    ifstream fin(filename);
    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> arr[i];
    fin.close();
}

void saveArray(string filename, const int arr[], int n)
{
    ofstream fout(filename);
    fout << n << endl;
    for (int i = 0; i < n; i++)
        fout << arr[i] << " ";
    fout.close();
}

void printArray(const int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertZeroBeforeK(int arr[], int& n, int k)
{
    // K в умові – порядковий номер (з 1)
    // У масиві індекс = K-1
    int index = k - 1;

    // Зсуваємо елементи вправо
    for (int i = n; i > index; i--)
        arr[i] = arr[i - 1];

    // Вставляємо 0
    arr[index] = 0;

    // Збільшуємо розмір
    n++;
}

// ============ ЗАВДАННЯ 3 ============
void getCharArray(string filename, char arr[], int& n)
{
    ifstream fin(filename);
    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> arr[i];
    fin.close();
}

void saveCharArray(string filename, const char arr[], int n)
{
    ofstream fout(filename);
    fout << n << endl;
    for (int i = 0; i < n; i++)
        fout << arr[i] << " ";
    fout.close();
}

void printCharArray(const char arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Бінарне сортування вставками (зростання)
void binaryInsertionSortAsc(char arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        char key = arr[i];
        int left = 0;
        int right = i - 1;

        // Бінарний пошук позиції для вставки
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (arr[mid] > key)
                right = mid - 1;
            else
                left = mid + 1;
        }

        // Зсув елементів вправо
        for (int j = i; j > left; j--)
            arr[j] = arr[j - 1];

        // Вставка
        arr[left] = key;
    }
}
