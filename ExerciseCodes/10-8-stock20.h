//
// Created by root on 12/1/18.
//

#ifndef MYCLIONPROJECT_10_8_STOCK20_H
#define MYCLIONPROJECT_10_8_STOCK20_H
#include <string>
#include <iostream>
class Stock3{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){total_val = shares * share_val;};

public:
    Stock3();
    Stock3(int a);
    Stock3(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock3();

    void buy3(long num,double price);
    void sell3(long num, double price);
    void update3(double price);
    void show3() const;
    const Stock3 & topval(const Stock3 & s) const;
};
#endif //MYCLIONPROJECT_10_8_STOCK20_H
