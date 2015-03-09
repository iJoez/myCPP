#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    cout << "Enter text that will be handled: "
            "(by the end-of-file)" << endl;

    vector<string> buffer;
    string str;
    while (cin >> str) 
    {
        buffer.push_back(str);
    }

    vector<string>::size_type sz;
    sz = buffer.size();

    cout << "You have entered the follows: " << endl;
    
    while (sz != 0)
    {
        cout << buffer[sz] << endl;
    }

    return 0;
}
