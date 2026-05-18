#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include <string>
using namespace std;

const int MAX = 20;

// Завдання 1
void getArray(string filename, int arr[], int& n);
void saveArray(string filename, const int arr[], int n);
void printArray(const int arr[], int n);
void insertZeroBeforeK(int arr[], int& n, int k);

// Завдання 3 (char масив)
void getCharArray(string filename, char arr[], int& n);
void saveCharArray(string filename, const char arr[], int n);
void printCharArray(const char arr[], int n);
void binaryInsertionSortAsc(char arr[], int n);

#endif
