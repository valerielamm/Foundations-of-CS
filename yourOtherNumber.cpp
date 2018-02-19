// Author :Valerie Lamm 
// 26 October 2016
// Programming Assignment Number 5
//
//
// <Purpose: Display Fibonacci numbers, Armstrong numbers,
//           Factorials, and Palindromes (will be checked).
//           Process is repeatable.>

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
// Variables (initial letter lowercase)
// (no punctuation, capitalized following words)
int userNumber; // Integer value for user integer input
char runAgain; // Character value to run again or not (input)
double fibonacciNumberOne; // 1 of 2 to add in fibonacci
double fibonacciNumberTwo; // 2 of 2 to add in fibonacci
double fibonacciNext; // Adding the previous 2 in fibonacci
int armstrongCalculator; // Removes digit- armstrong (150 to 15 to 1)
int armstrongX; // Will multiply together individual digits (x3) for armstrong
int armstrongAdd; // Will add together the multiplied digits for armstrong
double factorialTotal; // To hold the total of the factorial
int reverseTotal; // Stores reversed number
int reverseRemains; // Stores remainder digits when finding reverseTotal
int reverseHolder; // Used for user number calculations

// Intro
cout << "Solving mathematical problems using computers." << endl;
cout << "\nGiven a positive integer n > 0 and < or = 160,";
cout << "This application will";
cout << "\n\t1- Displays all Fibonacci series for that number." << endl;
cout << "\t2- Determine whether or not the integer is Armstrong number.";
cout << "\n\t3- Finds the factorial of that number." << endl;
cout << "\t4- Display the number in reverse order." << endl;
cout << "\t5- Determine to whether or not the number is palindrome.";
cout << "\n\t6- Display all palindrome numbers between 1 and the integer.";
do{
    // Input
    cout << "\n\nEnter an integer\t";
    cin >> userNumber;
    cout << endl;

    // The userNumber check
    if (userNumber < 1 || userNumber > 160)
    {
        cout << "Error - integer must be between 1 and 160";
    }
    if (userNumber > 0 && userNumber < 161)
    {
        // 1 - Fibonacci Series
        cout << "First " << userNumber << " terms of Fibonacci series are :-\n";
        fibonacciNumberOne = 0; // Assigns a start point to prevent random number
        fibonacciNumberTwo = 1; // Assigns a start point to prevent random number
        cout << fibonacciNumberOne << " " << fibonacciNumberTwo << " ";
        // First 2 numbers
        for (int i = 1; i <= userNumber-2; ++i)
        {
             // Will run as many times as the userNumber
             fibonacciNext = fibonacciNumberOne + fibonacciNumberTwo;
             // Calculates next number with previous numbers
             cout << setprecision(34) << fibonacciNext << " ";
             fibonacciNumberOne = fibonacciNumberTwo;
             fibonacciNumberTwo = fibonacciNext;
             // Updates what the previous 2 numbers are each time it loops
        }

        // 2 - Armstrong number checker
        armstrongAdd=0; //Assigns a start point to prevent random number
        armstrongCalculator=userNumber; // Assigns number to calculator
        while(armstrongCalculator!=0)
        {
             armstrongX=armstrongCalculator%10;
             // Determines the last digit of the number
             armstrongCalculator/=10;
             // Removes last digit from calculator
             armstrongAdd+=armstrongX*armstrongX*armstrongX;
             // Multiplies saved digit x3 and adds it to the saved total
        }
        cout << endl << endl;
        // Will stop looping when there is no more digits
        if(armstrongAdd == userNumber) // Compares calculated total to userNumber
        {
             cout << userNumber << " is an Armstrong number";
        }
        else
        {
             cout << userNumber << " is NOT an Armstrong number";
        }
        cout << endl << endl;

        // 3 - Factorial of number
        factorialTotal=1; // Sets base for multiplication
        cout << "Factorial of " << userNumber << " = ";
        for (int i=1; i <= userNumber; i++)
        {
             factorialTotal *= i;
        }

        cout << setprecision(300) << factorialTotal << endl<< endl;

        // 4 - Reverse of number
        reverseHolder = userNumber; // Assigns the userNumber to calculate with
        reverseTotal = 0; // Sets base for calculations
        cout << "Reverse of " << userNumber << " is:\t";
        while(reverseHolder != 0) // Determines reverse
        {
             reverseRemains =reverseHolder%10; // Determines last digit
             cout << reverseRemains; // Displays numbers in reverse
             reverseHolder /=10; // Takes off a digit to determine next digit
        }
        cout << endl << endl;

        // 5 - Palindrome checker
        if (reverseTotal == userNumber)
        {
             cout << userNumber << "   is a palindrome";
        }
        else
        {
             cout << userNumber << "   is not a palindrome";
        }
        cout << endl;

        // 6 - Palindrome Listing
        cout << "\nAll palindrome numbers between 1 and " << userNumber << " are\n";
        // Use a checker for all numbers up to the user number
        for(int i = 1; i < userNumber; i++)
        {
             reverseHolder = i; // Assigns the userNumber to calculate with
             reverseTotal = 0; // Sets base for calculations
             while(reverseHolder !=0) //Determines reverse
             {
                    reverseRemains =reverseHolder%10; // Determines last digit
                    // Makes last digit the first digit and then add the next ones after.
                    reverseTotal = ((reverseTotal*10) + reverseRemains);
                    reverseHolder /=10; // Takes off a digit to determine next digit
             }

             // If a number in the range is a palindrome, it is displayed
             if (reverseTotal == i)
             {
                    cout << setprecision(3) << i << " ";
             }
         }
     }

        // Run again prompt
        cout << "\n\nWould you like to run the application again\n";
        cout << "Enter Y/y or N/n ---->\t";
        cin >> runAgain;
        // Makes sure the correct characters allowed are entered
        while(runAgain != 'n' && runAgain !='N' && runAgain != 'y' && runAgain !='Y')
        {
             cout << "Invalid Choice - Please Enter Y or N ";
             cin >> runAgain;
        }
   }
// If user inputs either 'n' or 'N', the program will end loop
while(runAgain !='n' && runAgain != 'N');

// Ending comments
cout << endl;
cout << "Algorithm implemented by    Valerie M Lamm\n";
cout << "Computational Mathematics , INC.\n";
cout << "10 - 14 - 2016" << endl;

return 0;
}


