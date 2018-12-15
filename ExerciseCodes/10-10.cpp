//
// Created by root on 12/4/18.
//

#include "10-10.h"


//exercise 1
BankClient::BankClient() {
    name = "";
    account = NULL;
    deposit = 0;
}

BankClient::BankClient(string n, char *a, double d) {
    name = n;
    account = a;
    deposit = d;

    cout << "input data: " << &a << endl;
    cout << "my data: " << &account << endl;

}

void BankClient::showClinetInfo() {
    cout << "Client name : " << name << endl;
    cout << "Account : " << account << endl;
    cout << "Deposit : " << deposit << endl;
}

bool BankClient::input(double m) {
    if(m < 0){
        cout << "Can not input negative value! Failed!" << endl;
        return false;
    }

    deposit += m;
    return true;
}

bool BankClient::output(double m) {
    if(m < 0){
        cout << "Can not output negative value! Failed!" << endl;
        return false;
    }
    deposit -= m;
    return true;
}

void my_10_main1(){

    string name = "fan";
    char * account = new char[3];
    account = "hel";
    double deposit = 0;
    cout << "main data: " << &account << endl;
    BankClient bc(name, account,deposit);

}

//exercise 2
Person::Person() {

}

Person::Person(const string &ln, const char *fn) {
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const {
    cout << "first name: "  << fname << " lastname: " << lname << endl;
}

void Person::FormalShow() const {
    cout << "last name: " << lname << " firstname: " << fname << endl;
}

void my_10_main2(){
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    cout << endl;
    one.FormalShow();

    cout << endl;

    two.Show();
    cout << endl;
    two.FormalShow();

    cout << endl;

    three.Show();
    cout << endl;
    three.FormalShow();
}