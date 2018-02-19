// Valerie M Lamm
// 6 December 2016

#include <iostream>

using namespace std;

// Take radius from user, calculate circumference
void circumference();

// Takes two integers and determines if a is greater than b
void isGreaterThan(int a, int b);

// Takes array of loan amounts and its size
// Returns amounts over 100
void oweOverOneHundred(double [], const int);

// Takes a string and integer passed by reference
// Gets input from console and stores into the variables
void createDate(string &, int &);


int main()
{
    cout << "############ Function 1 ############" << endl << endl;

    /*call circumference() function and print result*/
    circumference();

    cout << "############ Function 2 ############" << endl << endl;

    /* call isGreaterThan(5, -6) and print result */
    /* call isGreaterThan(10, 5) and print result */

    isGreaterThan(5, -6);
    isGreaterThan(10, 5);

    cout << "############ Function 3 ############" << endl << endl;

    const int SIZE1 = 3; // Size of array1
    const int SIZE2 = 5; // Size of array2

    double array1 [SIZE1] = {30.5, 500.75, 72};
    double array2 [SIZE2] = {30.5, 500.75, 72, 126.5, 687};

    /*create arrays, call oweOverOneHundred function and print results */
    oweOverOneHundred (array1, SIZE1);
    oweOverOneHundred (array2, SIZE2);

    cout << "############ Function 4 ############" << endl << endl;

    string month; // String passed by reference
    int num; // Int passed by reference

    /*call the createDate funtion */
    createDate(month ,num);
    cout << "Variables printed in main: " << month << " " << num << endl;

    return 0;
}

void circumference()
{
    int radius; // Holds radius taken from user
    const double PI = 3.14159; // Constant PI value
    double circle; // Circumference

    cout << "Enter a radius: ";
    cin >> radius; // User input

    // Calculations
    radius += radius; // Diameter
    circle = radius * PI; // Circumference

    // Output
    cout << "The circumference of the circle is: " << circle;
    cout << endl << endl;
}

void isGreaterThan(int a, int b)
{
    if (b <0){
        cout << a << " is greater than (" << b << ") : ";
        if (a>b)
        {
            cout << "Y" << endl << endl;
        }
        else {
            cout << "N" << endl << endl;
        }
    }

    else {
        cout << a << " is greater than " << b << ": ";
        if (a>b)
        {
            cout << "Y" << endl << endl;
        }
        else {
            cout << "N" << endl << endl;
        }
    }
}

void oweOverOneHundred(double a[], const int B)
{
    int counter=0; // Sets base to counter
    cout <<"The number of loans over 100 in array [";

    for (int i=0; i<B; i++)
    {
        if (a[i]>3)
        {
            cout << a[i];
            if (i < (B-1))
                {
                    cout << ", ";
                }
        }
    }

    cout << "] : ";

        for (int i=0; i<B; i++)
    {
        if (a[i]>100)
        {
            counter++; // Counts number of instances over 100
        }
    }

    cout << counter<< endl << endl; // Displays number of instances over 100
}

void createDate(string &month, int &num)
{
    // User input
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter number: ";
    cin >> num;
}
