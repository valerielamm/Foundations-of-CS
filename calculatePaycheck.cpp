//  Author: Valerie Lamm
//  21 September 2016
//
//
//  <Purpose: To calculate and print a monthly paycheck>

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
                    // Summary Aspects
    string name;
    float income; // gross
    float net; // pay
    float federal0; // calculated (income tax)
    float state0; // calculated (tax)
    float social0; // calculated (security tax)
    float medicare0; // calculated (tax)
    float pension0; // calculated (plan)


                    // Constant Fees Applied
    const float federal = .10; //(income tax)
    const float state = .0325; // (tax)
    const float social = .0475; // (security tax)
    const float medicare = .0275; // (tax)
    const float pension = .05; // (plan)
    const float health = 75; // (insurance)


                    // Intoductory Information
    cout << "This program calculates and prints a monthly ";
    cout << "paycheck for an employee.\nThe net pay is calculated ";
    cout << "after taking the following deductions.\n";
    cout << "\tFederal Income Tax :        10 %\n";
    cout << "\tState Tax :              3.25 %\n";
    cout << "\tSocial Security Tax :    4.75 %\n";
    cout << "\tMedicare / Medicaid Tax : 2.75 %\n";
    cout << "\tPension Plan :           5 %\n";
    cout << "\tHealth Insurance :     $75.00\n\n";


                    // User Entering Name and Pay
    cout << "Enter Employee Name :      ";
    getline(cin,name);
    cout << "\nEnter Gross Pay :     ";
    cin >> income;


                    // Calculations
    federal0 = federal * income;
    state0 = state * income;
    social0 = social * income;
    medicare0 = medicare * income;
    pension0 = pension * income;

    net = income;
    net -= federal0;
    net -= state0;
    net -= social0;
    net -= medicare0;
    net -= pension0;
    net -= health;

                    // Restrictions
    cout << fixed << setprecision(2);


                    // Paycheck Summary
    cout << "\n\nPaycheck Summary\n\n";
    cout << "\tEmployee Name :      " << name << endl;
    cout << "\tGross Pay :          " << income << endl;
    cout << "\tFederal Income Tax : " << federal0 << endl;
    cout << "\tState Tax :          " << state0 << endl;
    cout << "\tSocial Security Tax : " << social0 << endl;
    cout << "\tMedicare / Medicaid Tax : " << medicare0 << endl;
    cout << "\tPension Plan : " << pension0 << endl;
    cout << "\tHealth Insurance : " << health << endl;
    cout << "\tNet Pay :            " << net << endl;


                    // End: Information
    cout << "Prepared by Valerie M Lamm\n";
    cout << "HR - CompSoft Consulting\n";


    return 0;
}