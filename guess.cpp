#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));    //it can generate random number by adding time it generates different number every time        
    int X = rand() % 100 +1;     //by this we can get number from 0 to 99 and by adding 1 it goes from 1 to 100
    int guess;

    cout << "Guess a number between 1 and 100\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > X) {
            cout << "Too high!\n";
        }
        else if (guess < X) {
            cout << "Too low!\n";
        }
        else {
            cout << "Correct! You guessed it.\n";
            break;
        }
    }

    return 0;
}
