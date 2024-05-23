#include <iostream>
#include <fstream>
#include "binary_representation.h"

using namespace std;

int main() {
    int number;
    cout << "Введіть ціле число: ";
    cin >> number;

    string binaryStr = decimalToBinary(number);
    writeBinaryToFile("binary_output.txt", binaryStr);
    
    // Оголошуємо змінну zeroCount, яка буде зберігати кількість нулів у бінарному рядку binaryStr.
    int zeroCount = countZerosInBinary(binaryStr);
    cout << "Кількість нулів у двійковому представленні: " << zeroCount << endl;

    return 0;
}