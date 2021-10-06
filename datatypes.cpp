#include<iostream>
using namespace std;

int main() {
    // integers
    int year = 2021;

    // character - !!! not a string of chars, just one character
    char gender = 'M';

    // boolean
    bool isOver18 = true;

    // floating point number
    float avarage = 1.5;

    // double - twice the size memory (8bytes) than floats
    double balance = 200000000;

    // sizeof
    cout << "Size of int is " << sizeof(int) << "bytes\n"; //4 bytes
    cout << "Minimum 32-bit (4 bytes) int value" << INT32_MIN << endl;

    cout << "Size of unsigned int is " << sizeof(unsigned int) << "bytes\n"; //4 bytes
    cout << "Max 32-bit (4 bytes) int value" << UINT32_MAX << endl;
}