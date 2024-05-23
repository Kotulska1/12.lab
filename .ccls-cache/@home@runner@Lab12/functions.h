#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
using namespace std;
// Оголошення змінних
extern int zeroCount;

// Оголошення функцій
void inputNumber(int &number);
string convertToBinary(int number);
void writeToFile(const string &filename, const string &binary);
void countZeros(const string &binary);
void printResults(const string &filename, int zeroCount);

#endif // FUNCTIONS_H