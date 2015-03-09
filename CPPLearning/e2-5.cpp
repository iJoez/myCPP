/* Write a set of "*" characters so that 
 * they form a square, a rectangle, and a triangle.
 */

#include <iostream>
#include <string>
using namespace std;

void draw_triangle(int height)
{
    int bottom = 2 * height + 1;
    int center = height;

    for (int row = 0; row != height; ++row)
    {
        for ( int c = 0; c != bottom; c++)
        {
            if ( c == center - row || c == center + row)
                cout << "*"; 
            else
                cout << " ";
        } 
        cout << endl;
    }
    string bottom_line(bottom, '*');
    cout << bottom_line << endl;
}

void draw_rectangle(int side_v, int side_h)
{
    for (int row = 0; row != side_v; ++row)
    {
        int col = 0;
        while (col != 2 * (side_h - 1))
        {
            if (col == 0 || row == 0 || 
                col == 2 * (side_h - 1) - 1 || row == side_v - 1)
                cout << "*";
            else
                cout << " ";

            col ++;
        }
        cout << endl;
    }
}

#if 0
void draw_square(int len)
{
    for (int row = 0; row != len; ++row)
    {
        int col = 0;
        while (col != 2 * (len - 1))
        {
            if (col == 0 || row == 0 || 
                    col == 2 * (len - 1) -1 || row == len - 1)
                cout << "*";
            else
                cout << " ";

            col ++;
        }
        cout << endl;
    }
#endif
    


int main()
{
    cout << "Whic form do you need? Square(0), rectangle(1), triangle(2): ";
    int form; 
    cin >> form; 
    cout << "The length of rectangle or height for triangle? ";
    int len;
    cin >> len;
    if (len <= 0)
    {
        cout << "Invalid length!" << endl;
        return -1;
    }


    switch (form)
    {
        case 0:
            {
                cout << "Draw a square!" << endl;
                draw_rectangle(len, len);
                break;
            }
        case 1:
            {
                cout << "Draw a rectangle!" << endl;
                draw_rectangle(len, len/2);
                break;
            }
        case 2:
            {
                cout << "Draw a triangle!" << endl;
                draw_triangle(len);
                break;
            }
        default:
            {
                cout << "Invalid Input!" << endl;
                break;
            }
    }

    return 0;
}

