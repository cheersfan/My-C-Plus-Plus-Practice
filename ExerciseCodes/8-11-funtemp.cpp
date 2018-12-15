//
// Created by root on 12/15/18.
//

#include "8-11-funtemp.h"
#include <iostream>
using namespace std;

template <typename T>
void myswap(T &, T &);

//template <> void myswap<double>(double a, double b);



void my_funtemp_main(){
    //template void myswap<char>(char a, char b);
    int i = 10;
    int j = 20;
    cout << "i: " << i << " ,j:" << j << endl;
    myswap(i,j);
    cout << "After myswap()\n";
    cout << "i: " << i << " ,j:" << j << endl;

    cout << "***" << endl;

    double i2 = 10.0;
    double j2 = 20.2;
    cout << "i: " << i2 << " ,j:" << j2 << endl;
    myswap(i2,j2);
    cout << "After myswap()\n";
    cout << "i: " << i2 << " ,j:" << j2 << endl;


}

template <typename T>
void myswap(T &a , T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

