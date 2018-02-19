// Valerie M Lamm
// 18 October 2016
//

// <Purpose: Find even numbers 0-N
//           Find odd numbers 0-N
//           Quit Program
// 

#include <iostream>

using namespace std;

int main()
{
    int choice; // User selected choice
    int n; // Number user input
    int counter; // Produces numeric values

   do{
    cout << "What would you like to do?" << endl; // Intro
    cout << "1. Find even numbers 0 - N" << endl;
    cout << "2. Find odd numbers 0 - N" << endl;
    cout << "3. Quit program" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
        while (choice < 1 || choice > 3) // Invalid choice output
        {
            cout << "ERROR: Invalid choice. Select a valid menu item." << endl << endl;
            cout << "What would you like to do?" << endl; // Reproduce intro
            cout << "1. Find even numbers 0 - N" << endl;
            cout << "2. Find odd numbers 0 - N" << endl;
            cout << "3. Quit program" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
        }

        n = 0;
        if (choice == 1) // Choice 1 output
        {
            cout <<"Enter N: ";
            cin >> n;
            counter = 0;
            cout << "Even numbers: ";
            while(counter <= n)
            {
                if (counter %2 == 0)
                {
                cout << " " << counter;
                }
                counter++;
            }
            cout << endl << endl;
        }
        else if (choice == 2) // Choice 2 output
        {
            cout << "Enter N: ";
            cin >> n;
            counter = 0;
            cout << "Odd numbers: ";
            while(counter <= n)
            {
                if (counter %2 != 0)
                {
                cout << " " << counter;
                }
                counter++;
            }
            cout << endl << endl;
        }
        else //Choice 3 output
        {
            cout << "Terminating program...";
        }
    }
    while (choice != 3); // Do while loop ends when 3 is selected

    return 0;
}
