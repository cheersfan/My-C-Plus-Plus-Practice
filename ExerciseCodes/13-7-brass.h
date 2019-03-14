//
// Created by root on 12/12/18.
//

#ifndef MYCLIONPROJECT_BRASS_H
#define MYCLIONPROJECT_BRASS_H

#include <string>
#include <iostream>
using namespace std;

class Brass{
private:
    string fullName;
    long accNum;
    double balance; // the money this account has

public:
    Brass(const string & s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposit(double amt);  //put money to the account
    double Balance() const;
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    virtual ~Brass(){};
};

class BrassPlus : public Brass{
private:
    double maxLoan; // the max money this account can loan
    double rate; // the rate of the loan
    double owesBank; //the moeny this account loans now

public:
    BrassPlus(const string & s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
    BrassPlus(const Brass & ba, double ml = 500, double r = 0.11125);\

    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);

    void ResetMax(double m){maxLoan = m;};
    void ResetRate(double r){rate = r;};
    void ResetOwes(double o){owesBank=o;};
};

#endif //MYCLIONPROJECT_BRASS_H
