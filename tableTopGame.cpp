// Author :Valerie Lamm 
//
//
// The following is a simple dice roller for a table top game.
//
#include <iostream>
#include <ctime>   // For seeding rand
#include <cstdlib> // C standard library

using namespace std;

int main()
{

        int random_number;

        // Seeds rand (needed for getting random numbers)
        srand(time(NULL));

        // Randomly generates a number 1 - 20 inclusively
        random_number = rand() % 20 + 1;

        cout << "You roll a " << random_number << ": ";

        // If the user rolls a 20
        if (random_number == 20)
        {
            cout << "CRITICAL HIT!!" << endl;
        }

        // If the user rolls between 12 and 19 inclusive.
        else if (random_number >= 12)
        {
            cout << "Attack Strikes" << endl;
        }

        // For any other roll
        else
        {
            cout << "Attack Misses" << endl;
        }


    return 0;
}

