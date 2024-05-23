//#include "binary_representation.h"
//#include "path_to_binary_representation.h/binary_representation.h"
#include <fstream>
#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
using namespace std;

// Convert decimal number to binary representation as a string
string decimalToBinary(int number) {
    if (number == 0) return "0";

    string binaryStr = "";
    while (number > 0) {
        binaryStr = to_string(number % 2) + binaryStr;
        number /= 2;
    }
    return binaryStr;
}

// Write the binary string to a text file
void writeBinaryToFile(const string &filename, const string &binaryStr) {
    ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << binaryStr;
        outFile.close();
    } else {
        cout << "Неможливо відкрити файл" << filename << endl;
    }
}

// Count the number of zeros in the binary string
int countZerosInBinary(const string &binaryStr) {
    return count(binaryStr.begin(), binaryStr.end(), '0');
}