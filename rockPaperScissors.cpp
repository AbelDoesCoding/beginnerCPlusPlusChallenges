#include <iostream>
using namespace std;

/* only one run and it worked ! even tho this was simple as fuck
EDIT: except if i put in two equal inputs that aren't the 3 choices, i still get a tie
*/

void rockPaperScis(string x, string y) {

    if (x == "rock" && y == "paper") {
        cout << "player two wins!" << endl;
    } else if (x=="rock" && y == "scissors") {
        cout << "player one wins!" << endl;
    } else if (x == "paper" && y=="rock") {
        cout << "player one wins!" << endl;
    } else if (x == "paper" && y == "scissors") {
        cout << "player two wins!" << endl;
    } else if (x == "scissors" && y == "rock") {
        cout << "player two wins!" << endl;
    } else if (x == "scissors" && y == "paper") {
        cout << "player one wins!" << endl;
    } else if (x == y) {
        cout << "TIE!" << endl;
    } else {
        cout << "please try again with correct moves :)" << endl;
    }

}


int main() {
    string playerOne, playerTwo;
    cout << "Player one: ";
    cin >> playerOne;
    cout << "Player two: ";
    cin  >> playerTwo;
    rockPaperScis(playerOne, playerTwo);

    return 0;
}