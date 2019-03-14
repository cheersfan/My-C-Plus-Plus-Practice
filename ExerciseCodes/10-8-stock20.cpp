//
// Created by root on 12/1/18.
//

#include "10-8-stock20.h"
Stock3::Stock3() {
    std::cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock3::Stock3(int a) {

    std::cout << "Constructor with only one parameter:\n";
    std::cout << a << std::endl;
}

Stock3::Stock3(const std::string & co, long n, double pr) {
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

Stock3::~Stock3() {
    std::cout << "Bye, " << company << "! \n";

}

void Stock3::buy3(long num, double price) {
    if(num < 0){
        std::cout << "Number of shares can`t be negative. Transaction is aborted .\n";
    }else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock3::sell3(long num, double price) {
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

void Stock3::show3() const{
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

const Stock3 & Stock3::topval(const Stock3 &s) const {
    if(s.total_val > total_val){
        return s;
    }else{
        return *this;
    }
}