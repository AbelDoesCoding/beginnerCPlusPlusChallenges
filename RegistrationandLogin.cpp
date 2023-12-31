#include <iostream>
#include <fstream>
using namespace std;

/* SUCCESS !!!*/

int main() {
    // NEW PLAN. THIS IS WHY YOU REREAD. We're gonna make a new file
    // for each user and then we can add info to file at a later time

    string newUserName, newUserPass, newUserFileName, loginName, loginPass, loginNameFile, passCompare;
    int menuChoice, x = 0;
    fstream userFile;

    cout << "Please login(1) or register(2): ";
    cin >> menuChoice;
    if (menuChoice == 1) {
        cout << "Please enter your username: ";
        cin >> loginName;
        loginNameFile = loginName + ".txt";
        // needs if statement to see if it exists
        userFile.open(loginNameFile, ios::in);
        ifstream inFile(loginNameFile);
        string words;
        while(inFile >> words) {
            passCompare = words;
        }
        cout << "Password: ";
        cin >> loginPass;
        if (loginPass == passCompare) {
            cout << "you're in!" << endl;
        } else {
            cout << "wrong pass :D" << endl;
        }


    } else if (menuChoice == 2) {
        cout << "Choose a username: ";
        cin >> newUserName;
        // needs if statement to check for existing file
        newUserFileName = newUserName + ".txt";
        userFile.open(newUserFileName, ios::out);
        cout << "Choose a password: ";
        cin >> newUserPass;
        userFile << newUserPass;
        userFile.close();
        cout << "You have been succesfully regy'd. Run this shit again." << endl;
    }

    return 0;
    }

