#include <iostream>
#include <fstream>
#include "binary_representation.h"

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    string binaryStr = decimalToBinary(number);
    writeBinaryToFile("binary_output.txt", binaryStr);

    int zeroCount = countZerosInBinary(binaryStr);
    cout << "Number of zeros in the binary representation: " << zeroCount << endl;

    return 0;
}