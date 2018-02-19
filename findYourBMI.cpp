// Valerie Lamm
// 13 September 2016
//
//
// Purpose: To find BMI with height, weight, name.

#include <iostream>

using namespace std;

int main()
{
    string name;
    double height;
    double weight;
    double bmi;

    cout << "What is your name?" << endl;
    cin >> name;
    cout << endl;

    cout << "Lets find your BMI, " << name << "." << endl << endl;

    cout << "What is your weight (lbs)?" << endl;
    cin >> weight;
    cout << endl << endl;

    cout << "Now, what is your height (inches)(1 foot equals 12 inches)?" << endl;
    cin >> height;
    cout << endl;

    bmi = (weight / (height * height)) * 703;

    cout << "All right," << endl;
    cout << "Your BMI = " << bmi << endl;

    return 0;
}
