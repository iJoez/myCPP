#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int a;
    cin >> a;

    cout << "Enter another number: ";
    int b;
    cin >> b;

    if (a > b)
        cout << a << " is larger than " << b << endl;
    else
        cout << b << " is larger than " << a << endl;
        
    return 0;
}
