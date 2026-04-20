#include <iostream>
#include "functions.h"
using namespace std;
int main() {
    int initalnumber;
    int number;
    cout << "Enter number 1: ";
    cin >> initalnumber;
    while(cin.fail()) {
        cin.clear();
        cin.ignore();
        cout <<"it is not a number,try again."<<endl;
        cout << "enter number 1: ";
        cin >> initalnumber;
    }
    char c='c';
    while(c!= '=') {
        cout << "Islem:";
        cin >> c;
        while (c != '+' && c != '-' && c != '*' && c != '/') {
            cout << "wrong calculation try again."<<endl;
            cout << "enter ıslem: ";
            cin>>c;
        }
        while(cin.fail()) {
            cin.clear();
            cin.ignore();
            cout <<"wrong calculation try again."<<endl;
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
        initalnumber=calculate(c,initalnumber, number);
        cout << initalnumber << endl;
    }
}
