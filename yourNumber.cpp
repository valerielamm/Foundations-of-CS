// Author :Valerie M Lamm Roster Number 46
// 16 November 2016
//
//
// <Purpose: Determines best currency form in change
//           Outputs time possibilities for user's age
//           Separates digits of a number and writes number
//           Displays prime numbers
//           Shows hailstone sequence>

#include <iostream>
#include <iomanip>      //setw

using namespace std;

// Function Prototypes (at least 5)
void currencyCalculation(int); // Computes change to be displayed
void personAge(int); // Displays age statistics
void numberSeparation(int); // Numbers separate
void primeNumbers(int); // Displays prime numbers
void hailstoneSequence(int); // Displays hailstone sequence


int main()
{
// Variables (initial letter lowercase)
// (no punctuation, capitalized following words)
int number; // User input number



// Constants ALL_CAPS

// Header
cout << "A program that accepts an integer from the keyboard.\n";
cout << "The program then calls the following functions :\n\n";

// Description
cout << "1. Currency Calculation:  The function computes and displays\n";
cout << "   the number of quarters, dimes, nickels, and pennies";
cout << endl << "2. person's Age:  The function then calculates ";
cout << "and displays statistics" << endl;
cout << "   about one's age. The function displays the ";
cout << "following information" << endl;
cout << ": -" << endl;
cout << "Number of months, days, hours, minutes , and ";
cout << "seconds for the\nperson" << endl;
cout << "3. Number Separation:  Function separate and ";
cout << "displays the numbers" << endl;
cout << "   into its individual digits. The function then" << endl;
cout << "   displays each digit of the integer in English." << endl;
cout << "4. Prime Numbers:  Function that indicate whether or not\n";
cout << "   the integer is prime. The function also display" << endl;
cout << "   all the prime numbers between 1 and that number." <<endl;
cout << "5. Hailstone Sequence:  Given any positive integer n," << endl;
cout << "   the hailstone sequence starting at n is ";
cout << "obtained as follows." << endl;
cout << "   You start by writing n. If n is even, ";
cout << "then the next number is n/2." << endl;
cout << "   If n is odd, then the next number is 3n + 1." << endl;
cout << "   Continue in this way until you write the number 1.\n\n";

// Positive Integer Output & Input
cout << "Enter a Positive integer Number > 0 --->\t";
cin >> number;
cout << endl << endl;

// Integer Checker
if (number < 1)
{
    cout << endl << "Integer must be > 0\n";
    cout << "re-run the app & use a positive number > 0\n\n";
}

else {
    // Currency Calculation Output
    cout << "Currency Calculation\n\n";
    cout<< number << "  cent/s is equivalent to:\n\n\n";
    currencyCalculation(number);

    // Age Calculation Output
    cout << "Age Calculation" << endl << endl;
    cout << "Assuming that you are " << number;
    cout << "   year's old , then\n\n";
    personAge(number);

    // Separating Digits Output
    cout << "Separating digits for the integer   " << number;
    cout << endl;
    numberSeparation(number);
    cout << endl;

    // Prime Output
    primeNumbers(number);


    // Hailstone Output
    cout << endl << endl;
    cout << "The sequence of hailstone starting at " << number;
    cout << " is\n";
    hailstoneSequence(number);
    }
    // Ending
    cout << "Implemented by Valerie M Lamm\n";
    cout << "November 16th, 2016\n";

    return 0;
}

// Function Definitions
void currencyCalculation(int number) // Computes change to be displayed
{
    // Variables
    int quarters = 0; // Used to hold the amount of quarters
    int dimes = 0; // Used to hold the amount of dimes
    int nickels = 0; // Used to hold the amount of nickels
    int pennies = 0; // Used to hold the amount of pennies

    // Calculations
    while (number >= 25) // Finds max quarters
    {
        quarters++;
        number -= 25;
    }
    while (number >= 10) // Finds max dimes
    {
        dimes++;
        number -= 10;
    }
    while (number >= 5) // Finds max nickels
    {
        nickels++;
        number -= 5;
    }
    while (number >= 1) // Finds max pennies
    {
        pennies++;
        number -= 1;
    }
    // Currency Calculated Output
    cout << quarters << "   quarter/s" << endl;
    cout << dimes << "   dime/s" << endl;
    cout << nickels << "   nickel/s" << endl;
    cout << pennies << "   cent/s" << endl << endl;

}
void personAge(int number) // Displays age statistics
{
    // Variables
    int months; // Used to hold the amount of months
    long int days; // Used to hold the amount of days
    long int hours; // Used to hold the amount of hours
    long long int minutes; // Used to hold the amount of minutes
    long long int seconds; // Used to hold the amount of seconds

    // Calculations
    months = number * 12;
    days = number * 365;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;

    // Age Calculated Output
    cout << "You are   " << months << "  months old" << endl;
    cout << "You are   " << days << " days old" << endl;
    cout << "You are approximately " << hours << "    hours old\n";
    cout << "You are approximately " << minutes << "    minutes old\n";
    cout << "You are approximately " << seconds << "    seconds old";
    cout << endl << endl << endl << endl;

}
void numberSeparation(int number) // Numbers separate
{
    // Variables
    int digitFinder; // Used to determine number of digits
    int digits = 0;
    int placeHolder = 1;
    int placeHolderStart;
    int individualNumber;

    // The number of digits determines how many times
    // the 'for loop' needs to loop
    digitFinder = number; // Sets to input number
    while (digitFinder > 0)
    {
        ++digits; // Adds one to digit counter
        digitFinder /= 10; // Removes last digit
    }

    // Establishes the correct amount of zeros in the placeHolder
    for (int i = 0; i < digits-1; i++)
    {
        placeHolder *= 10;
    }

    // Keeps correct amount of zeros for calculations
    placeHolderStart = placeHolder;

    // Numeric values established in array & output
    for (int i = 0; i < digits; i++)
    {
        individualNumber = number / placeHolder %10;
        cout << individualNumber << "   ";
        placeHolder /= 10;
    }
    cout << endl;

    placeHolder = placeHolderStart;

    // Literal numeric values determined output
    for (int i = 0; i < digits; i++)
    {
        individualNumber = number / placeHolder %10;
        placeHolder /= 10;
            switch(individualNumber)
        {
        case 0 :
            {
                cout << "zero";
            }
        break;
        case 1 :
            {
                cout << "one";
            }
        break;
        case 2:
            {
                cout << "two";
            }
        break;
        case 3:
            {
                cout << "three";
            }
        break;
        case 4:
            {
                cout << "four";
            }
        break;
        case 5:
            {
                cout << "five";
            }
        break;
        case 6:
            {
                cout << "six";
            }
        break;
        case 7:
            {
                cout << "seven";
            }
        break;
        case 8:
            {
                cout << "eight";
            }
        break;
        case 9:
            {
                cout << "nine";
            }
        break;
        }
        cout << "  ";
    }
}
void primeNumbers(int number) // Displays prime numbers
{
    cout << endl;
    if ((number==2) || (number==3) || (number==5) || (number==7))
    {
        cout << number << " number is prime\n";
    }
    else if((number%2==0) ||(number%3==0) || (number%4==0)||
       (number%5==0)||(number%6==0)|| (number%7==0)||
       (number%8==0)||(number%9==0))
    {
        cout << number << " number is not prime\n";
    }
    else
    {
        cout << number << " number is prime\n";
    }

    cout << endl;
    cout << "All prime numbers between 1 and " << number << " are\n";

    for (int i = 1; i <= number; i++)
    {
        if ((i==1) || (i==2) || (i==3) || (i==5) || (i==7))
        {
            cout << i;
            cout << setw(21) << " number is prime\n";
        }
        else if((i%2==0) ||(i%3==0) || (i%4==0)||
       (i%5==0)||(i%6==0)|| (i%7==0)||
       (i%8==0)||(i%9==0))
        {

        }
        else
        {
            cout << i;
            cout << setw(20) << " number is prime\n";
        }
    }
}
void hailstoneSequence(int number) // Displays hailstone sequence
{
    do
    {
        if(number % 2 == 0)// If the number is even
        {
            number /= 2;
            cout << number << "   ";
        }
        else // If the number is odd
        {
            number *= 3;
            number++;
            cout << number << "   ";
        }

    }
    while (number != 1);
    cout << endl << endl;
}


