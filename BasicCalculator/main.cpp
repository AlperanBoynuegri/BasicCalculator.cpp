#include <iostream>
#include "functions.h"
using namespace std;
int main() {
    float initalnumber;
    float number;
    cout << "Enter number 1: ";
    cin >> initalnumber;
    while(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout <<"it is not a number,try again."<<endl;
        cout << "enter number 1: ";
        cin >> initalnumber;
    }
    string c="c";
    while(c!= "=") {
        cout << "Islem:";
        cin >> c;
        while (c != "+" && c != "-" && c != "*" && c != "/") {
            cout << "1wrong calculation try again."<<endl;
            cout << "enter ıslem: ";
            cin>>c;
        }
        while(cin.fail()) {
            cin.clear();
            cin.ignore();
            cout <<"2wrong calculation try again."<<endl;
            cout << "enter calculation: ";
            cin >> c;
        }
        cout << "Enter number : ";
        cin >> number;
        while(cin.fail()) {
            cin.clear();
            cin.ignore();
            cout <<"it is not a number,try again."<<endl;
            cout << "enter number : ";
            cin >> number;
        }
        initalnumber=calculate( c,initalnumber, number);
        cout << initalnumber << endl;
    }
}
