#include<iostream>
#include<cstdlib>
using namespace std;

// Create game that lets users guess numbers with various levels of difficulty


// game modes
int easyMode() {
	// Providing a seed value
	srand((unsigned) time(NULL));
	// Get a random number
	int random = rand() % 10;
	// Print the random number
	return random;
}

int MedMode () {
	srand((unsigned) time(NULL));
	int random = rand() % 100;
	return random;    
}

int HardMode () {
	srand((unsigned) time(NULL));
	int random = rand() % 1000;
	return random;    
}

int main() {
    int menuChoice, randomOutput, userGuess;
    double balance = 0;
    bool gameOn = true;

    while (gameOn ==true) {
        cout << "Current balance: $" << balance << endl <<
         "Please select your level of difficulty:" << endl << "1. Easy Mode [$0.50] (1)"
        << endl << "2. Medium Mode [$12.50] (2)" << endl << "3. Hard Mode !! [$20.00] (3)" << endl
        << "4. Cash Out(4)" << endl;
        cin >> menuChoice;
        if (menuChoice == 1) {
            balance -= .5;
            cout << "Please pick a number between 1 and 10: ";
            cin >> userGuess;
            randomOutput = easyMode();
            if (userGuess == randomOutput) {
                cout << "nailed it!" << endl;
                balance += 3;
            } else {
                cout << "wrongg !!!!!" << endl;
            }
        } else if (menuChoice == 2) {
            balance -= 12.5;
            cout << "Please pick a number between 1 and 100: ";
            cin >> userGuess;
            randomOutput = MedMode();
            if (userGuess == randomOutput) {
                cout << "nailed it!" << endl;
                balance += 50;
            } else {
                cout << "wrongg !!!!!" << endl;
            }
        } else if (menuChoice == 3) {
            balance -= 20;
            cout << "Please pick a number between 1 and 1000: ";
            cin >> userGuess;
            randomOutput = HardMode();
            if (userGuess == randomOutput) {
                cout << "nailed it!" << endl;
                balance += 500;
            } else {
                cout << "wrongg !!!!!" << endl;
            }
        } else if (menuChoice == 4){
            break;
        } else {continue;}
    }
}
/* meed another function to see if balance is zero
and not lower it if 0. Maybe*/