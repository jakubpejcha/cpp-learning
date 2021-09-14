// header files, libraries
#include <iostream>
#include <vector>
#include <string>

// instead of std::cout for example, we are now able to use just cout
using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}