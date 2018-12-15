//
// Created by root on 11/26/18.
//

#include "4-6b-numstr.h"

void my_numstr_main(){
    using namespace std;
    cout << "What year was your house built? \n";
    int year;
    cin >> year;
    cout << "What is its street address? \n";
    cin.get();
    char address[80];
    cin.getline(address,80);
    cout << "Your built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";

}