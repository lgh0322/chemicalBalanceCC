#ifndef RATIONALMATRIX
#define RATIONALMATRIX
#include "rationalNumber.h"
#include "stdlib.h"
extern void initMatrix(int ** chem, int myRow, int myColumn);
void rref();
void coefficientArray();
extern int * coefficientNum;
extern RationalNumber** rationalMatrix;

#endif