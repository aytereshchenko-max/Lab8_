#include "matrix_utils.h"
#include <fstream>
#include <iostream>
#include <climits>

using namespace std;

void getMatrix(string filename, int matrix[][MAX], int& m, int& n)
{
    ifstream fin(filename);
    fin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            fin >> matrix[i][j];
    fin.close();
}

void printMatrix(int matrix[][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void findRowMin(int matrix[][MAX], int m, int n)
{
    cout << "\nМінімальні елементи в кожному рядку:\n";

    for (int i = 0; i < m; i++)
    {
        int minVal = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] < minVal)
                minVal = matrix[i][j];
        }
        cout << "Рядок " << i + 1 << ": " << minVal << endl;
    }
}
