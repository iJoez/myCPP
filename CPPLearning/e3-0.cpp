#include <iostream>
#include <string>
#include <ios>          //For using streamsize
#include <iomanip>      //For using setprecision
#include <algorithm>    //For using sort
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;

int main()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    cout << "Enter all your midterm and final term grade: ";
    double midterm, final;
    cin >> midterm >> final;
    cout << "midterm: " << midterm << ";" << "final: " << final << endl;

    cout << "Enter all your homework grades, "
            "followed by end-of-file: ";

    vector<double> homework;
    double x;

    // if reading input failed, (cin >> x) yeilds 0
    while (cin >> x)
    {
        homework.push_back(x);        
    }


    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();

    //Necessary to test size here, since if size == 0,
    //later will cause undefined behavior by using homework[mid]
    if (size == 0)
    {
        cout << endl << "You must enter your grades: "
                        "Please try again." << endl;
        return 1;
    }

    sort(homework.begin(), homework.end());

    vec_sz mid = size/2;
    double median;
    median = size % 2 == 0 ? (homework[mid] + homework[mid-1])/2
                           : homework[mid];

    //For resetting precision to previous value
    streamsize prec = cout.precision(); 
    cout << "Your final grade is " << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * median
         << setprecision(prec) << endl;

    return 0;
}


