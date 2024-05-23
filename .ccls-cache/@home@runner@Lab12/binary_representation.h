#ifndef BINARY_REPRESENTATION_H
#define BINARY_REPRESENTATION_H

#include <string>

using namespace std;

string decimalToBinary(int number);
void writeBinaryToFile(const string &filename, const string &binaryStr);
int countZerosInBinary(const string &binaryStr);

#endif
