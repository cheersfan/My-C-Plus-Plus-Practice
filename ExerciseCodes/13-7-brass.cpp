//
// Created by root on 12/12/18.
//

#include "13-7-brass.h"

//format stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

format setFormat(){
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p){
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}

Brass::Brass(const string &s, long an, double bal) {
    fullName = s;
    accNum = an;
    balance = bal;
}

void Brass::Deposit(double amt){
    if(amt < 0){
        cout << "Negative deposit not allowed;  deposit is cancelled.\n";
    }else{
        balance += amt;
    }
}

void Brass::Withdraw(double amt) {
    //set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);

    if(amt < 0){
        cout << "Withdrawal amount must be positive; withdrawal canceled.\n";
    }else if(amt <= balance){
        balance -= amt;
    }else{
        cout << "Withdrawal amount of $ " << amt <<" exceed your balance.\n Withdrawal canceled.\n";
    }

    restore(initialState, prec);
}

double Brass::Balance() const {return balance;};

void Brass::ViewAcct() const {
    //set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);

    cout << "Client:" << fullName << endl;
    cout << "Account Number:" << accNum << endl;
    cout << "Balance:$" << balance << endl;
    restore(initialState, prec);
};

BrassPlus::BrassPlus(const string &s, long an, double bal, double ml, double r) : Brass(s,an,bal) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r) :Brass(ba), maxLoan(ml), rate(r), owesBank(0.0) {
}


void BrassPlus::Withdraw(double amt) {
    //set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);


    double bal = Balance();
    if(amt <= bal){
        Brass::Withdraw(amt);
    }else if(amt <= bal + maxLoan - owesBank){
        double advance = amt - bal;
        owesBank += advance *(1 + rate);
        cout << "Bank advance:$ " << advance << endl;
        cout << "Fiance charge:$ " << advance * rate << endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }else{
        cout << "Vredit limit exceeded. Transaction cancelled.\n";
    }

    restore(initialState, prec);
}

void BrassPlus::ViewAcct() const {
    //set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);

    Brass::ViewAcct();

    cout << "Maxinum loan: $ " << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Loan Rate: " << 100 * rate << "% \n";

    restore(initialState, prec);

};