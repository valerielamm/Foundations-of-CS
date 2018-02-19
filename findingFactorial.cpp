// Valerie M Lamm
// 11 October 2016
//
// <Purpose: To calculate a number 0-12 factorial>

#include <iostream>
using namespace std;

int main()
{
    int input;
    int output;
    output=1;

    // Introduction
    cout << "Enter a number to find its factorial (0-12): ";
    cin >> input;

    // Validation
    if (input < 0 || input > 12)
    {
        cout << "ERROR:Valid numbers are 0 to 12" << endl;
        return -1;
    }
    cout << "!" << input << " = ";

    // Zero
    if (input==0)
    {
        cout << "1" << endl;
    }

    // Calculations
    for (int start = 1; start <= input; start++)
    {
        if(start==input)
        {
        cout << start<< "= ";
        output *=start;
        cout << output;
        }
        else {
        output *=start;
        cout << start << " * ";
        }
    }

    return 0;
}
