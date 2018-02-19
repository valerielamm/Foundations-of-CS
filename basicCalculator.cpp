// Valerie M Lamm
// 4 October 2016
//
// A super deluxe calculator


#include <iostream>

using namespace std;

int main()
{

    int number1;
    int number2;
    int output_number;
    char operation; // + - * 


    //Intro and Input
    cout << "Welcome to my super deluxe calculator 2000!" << endl;
    cout << "Enter the first number" << endl;
    cin >> number1;
    cout << "Enter the desired operation (+ - * /)" << endl;
    cin >> operation;
    cout << "Enter the second number" << endl;
    cin >> number2;

    if (number2 > 0)
    {
        switch(operation)
         {
            // Addition
            case '+':
                output_number = number1 + number2;
                cout << number1 << " + " << number2 << " = " << output_number << endl;
                break;
            //Subtraction
            case '-':
                output_number = number1 - number2;
                cout << number1 << " - " << number2 << " = " << output_number << endl;
                break;
            //Multiplication
            case '*':
                 output_number = number1 * number2;
                cout << number1 << " * " << number2 << " = " << output_number << endl;
                break;
            //Division
            case '/':
                output_number = number1 / number2;
                cout << number1 << " / " << number2 << " = " << output_number << endl;
                break;
            //Invalid Operater
            default: cout << "ERROR: Invalid operator" << endl;
                break;
         }
     }
     else
     {
         cout << "ERROR: Divide by zero" << endl;
     }

    return(0);

}
