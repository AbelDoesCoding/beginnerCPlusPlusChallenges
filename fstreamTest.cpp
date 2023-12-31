#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream testData;
    testData.open("testData.rtf");
    /* 
    iso::in - reading mode
    iso::out - write mode
    iso::app - append
    iso::ate - File opened in append 
    mode but read and write performed at the end of the file.
    */

    string words, newUserName, newPassword, userName, userPass;
    int menuChoice, logInTotal;

    cout << "Log in (1), or Register (2) ?" << endl;
    cin >> menuChoice;
    if (menuChoice == 1) {
        cout << "Enter your username: ";
        cin >> userName;
        while(testData >> words) {
            string x = words;
            if (userName == x) {
                logInTotal += 1;  
            } else {
                cout << "Username not found!" << endl;
            }}}

        if (logInTotal == 1) {
            cout << "Password: ";
            cin >> userPass;
            while(testData >> words) {
            string x = words;
            if (userPass == x) {
                logInTotal += 1;  
            } else {
                cout << "Password incorrect!" << endl;
            }}

        if (logInTotal == 2) {
            cout << "You're in!!" << endl;
        }

        
    } else if (menuChoice == 2) {
        cout << "Pick User Name:";
        cin >> newUserName;
        cout << "Pick password: ";
        cin >> newPassword;
    
        while(testData >> words) {
            string x = words;
            if (newUserName == x) {
                cout << "Username already taken!" << endl;
            } else if (newPassword == x) {
                cout << "Password already taken!" << endl;
            }}
    }

   testData.close();
   return 0;
}