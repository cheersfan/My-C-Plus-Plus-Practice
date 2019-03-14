//
// Created by root on 11/29/18.
//

#include "10-4-stock10.h"

Stock::Stock() {
    std::cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(int a) {

    std::cout << "Constructor with only one parameter:\n";
    std::cout << a << std::endl;
}

Stock::Stock(const std::string & co, long n, double pr) {
    std::cout << "Constructor using " << co << " called\n";
    company = co;
    if(n < 0){
        std::cout << "Number of shares can`t be negative; " << company << " shares set to 0.\n";
        shares = 0;
    }else{
        shares = n;
    }

    share_val = pr;
    set_tot();
}

Stock::~Stock() {
    std::cout << "Bye, " << company << "! \n";

}

void Stock::buy2(long num, double price) {
    if(num < 0){
        std::cout << "Number of shares can`t be negative. Transaction is aborted .\n";
    }else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell2(long num, double price) {
    using std::cout;
    if(num < 0){
        cout << "Number of shares can`t be negative. Transaction is aborted. \n";
    }else if(shares < num){
        cout << "You can`t sell more than you have! Transaction is aborted. \n";
    }else{
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::show2() {
    std::cout << "Company: " << company << " Shares: " << shares << '\n' << " Share Price:$" << share_val << " Total Worth:$" << total_val << '\n';

    using std::cout;
    using std::ios_base;

    //set format to #.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company << " Shares: " << shares << '\n' << " Share Price:$" << share_val << " Total Worth:$" << total_val << '\n';

    //set format to #.##
    cout.precision(3);
    cout << "Total Worth:$ " << total_val << '\n';

    //restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
