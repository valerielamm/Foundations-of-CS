// Valerie M Lamm
// 8 November 2016
// CS 1428. L14


// Purpose: Calculate the employee's salaries and add them
// together and then find the average for the company's salaries.

#include <iostream>

using namespace std;

bool isValidHours(int);
float calcPay(int, float);
float calcAveragePay(float, int);

int main()
{

    int employees;
    int averageSalary;
    int hours;
    float payRate;
    float total = 0;


    cout << "Enter the number of employees:\t";
    cin >> employees;
    cout << endl;

    while(employees < 1)
        {
         cout << "ERROR: Program needs more than one employee to function." << endl;
         cout << "Enter the number of employees:\t";
         cin >> employees;
        }

    float salary;


    for (int i = 1; i <= employees; i++)
    {

    cout << "Enter number of hours worked by Employee " << i << ":\t";
    cin >> hours;

    while (isValidHours(hours) == false)
    {
        cout << "ERROR: Hours must be between 1 and 40" << endl;
        cout << "Enter number of hours worked by Employee " << i << ":\t";
        cin >> hours;
    }

    cout << "Enter the pay rate for Employee " << i << ":\t";
    cin >> payRate;
    cout << endl;

    while (payRate > 15 || payRate < 7)
    {
        cout << "ERROR: Pay rate must be from 7 to 15" << endl;
        cout << "Enter the pay rate for Employee " << i << ":\t";
        cin >> payRate;
    }

    cout << "Weekly Salary of Employee " << i << ":\t";
    salary = calcPay(hours, payRate);
    cout << salary << endl << endl;

    total += salary;
    }


    averageSalary = calcAveragePay(total, employees);
    cout << "The Average Weekly Salary for the Company is\t" << averageSalary;

    return 0;
}

bool isValidHours(int hours)
{
    if (hours >0 && hours<=40)
    {
        return true;
    }
    else
    {
        return false;
    }
}
float calcPay(int hours, float payRate)
{
    return hours * payRate;
}
float calcAveragePay(float total, int employees)
{
    total /= employees;
    return total;
}
