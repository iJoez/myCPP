#include <iostream>
#include <string>

//using std::cin;     //using std::endl;
//using std::cout;    //using std::string;
using namespace std;

int main()
{
    cout << "Please enter your name: ";
    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";
    const int pad = 1;
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    cout << endl;
    cout << "rows = " << rows << endl;
    cout << "cols = " << cols << endl;

    cout << greeting << endl;
    for (int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;
        while (c != cols)
        {
            if ((r == pad + 1) && (c == pad + 1))
            {
                //It's the postion to write the greeting;
                cout << greeting;
                c += greeting.size();
            }
            else 
            {
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                {
                    //It's on border on which '*' is drawn;
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                c++;
            }
        }
        cout << endl;
    }

    return 0;
}
