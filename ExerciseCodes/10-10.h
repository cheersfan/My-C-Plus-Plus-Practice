//
// Created by root on 12/4/18.
//

#ifndef MYCLIONPROJECT_10_10_H
#define MYCLIONPROJECT_10_10_H

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class BankClient{
private:
    string name;
    char * account;
    double deposit;

public:
    BankClient();
    BankClient(string n, char * a, double d);
    void showClinetInfo();
    bool input(double m);
    bool output(double m);
};

class Person{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
public:
    Person();
    Person(const string & ln, const char * fn = "Heyyou");

    void Show() const;
    void FormalShow() const;

};

void my_10_main1();
void my_10_main2();
void my_10_main3();
void my_10_main4();
void my_10_main5();
void my_10_main6();
void my_10_main7();
void my_10_main8();

#endif //MYCLIONPROJECT_10_10_H
