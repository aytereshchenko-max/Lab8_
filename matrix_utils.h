#ifndef MATRIX_UTILS_H
#define MATRIX_UTILS_H

#include "array_utils.h"   
#include <string>

using namespace std;

void getMatrix(string filename, int matrix[][MAX], int& m, int& n);
void printMatrix(int matrix[][MAX], int m, int n);
void findRowMin(int matrix[][MAX], int m, int n);

#endif
