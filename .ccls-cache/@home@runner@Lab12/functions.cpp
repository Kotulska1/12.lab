#include "binary_representation.h"
#include <fstream>
#include <bitset>
#include <string>
#include <algorithm>

// Convert decimal number to binary representation as a string
std::string decimalToBinary(int number) {
    if (number == 0) return "0";

    std::string binaryStr = "";
    while (number > 0) {
        binaryStr = std::to_string(number % 2) + binaryStr;
        number /= 2;
    }
    return binaryStr;
}

// Write the binary string to a text file
void writeBinaryToFile(const std::string &filename, const std::string &binaryStr) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << binaryStr;
        outFile.close();
    } else {
        std::cerr << "Unable to open file " << filename << std::endl;
    }
}

// Count the number of zeros in the binary string
int countZerosInBinary(const std::string &binaryStr) {
    return std::count(binaryStr.begin(), binaryStr.end(), '0');
}