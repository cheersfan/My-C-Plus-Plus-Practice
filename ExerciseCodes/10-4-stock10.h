//
// Created by root on 11/29/18.
//

#ifndef MYCLIONPROJECT_STOCK10_H
#define MYCLIONPROJECT_STOCK10_H

#include <string>
#include <iostream>
class Stock{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){total_val = shares * share_val;};

public:
    Stock();
    Stock(int a);
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock();

    void buy2(long num,double price);
    void sell2(long num, double price);
    void update2(double price);
    void show2();
};

#endif //MYCLIONPROJECT_STOCK10_H
