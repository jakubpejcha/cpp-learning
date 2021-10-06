#include<iostream>
using namespace std;

int main() {
    // type varName = value;
    float annual = 50.9;
    float monthly = annual / 12;
    cout << "Variable monthly is: " << monthly << endl;

    float salary;
    cout << "Enter your salary ";
    cin >> salary;
    cout << "Your salary is: " << salary << endl;

    // character into value
    // saving character into variable - use '', not ""
    // use "" outside
    // a value of type "const char *" cannot be used to initialize an entity of type "char"
    char character = 'a';
    cout << character << endl;

    // note to naming convention - only allowed '_' as specil char
    // I cannot use my-variable, must use my_variable instead
}

