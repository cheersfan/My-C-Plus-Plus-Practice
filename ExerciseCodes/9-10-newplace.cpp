//
// Created by root on 12/10/18.
//

#include "9-10-newplace.h"
#include <iostream>
#include <new> //为定位new运算符而添加的头文件
const int BUF = 512;
const int N = 5;
char buffer[BUF];

int my_newplace_main(){
    using namespace std;

    double *pd1, *pd2;
    int i;

    cout << " calling new and placement new: \n";
    pd1 = new double[N];
    pd2 = new (buffer) double[N]; //giver the space of buffer array to pd2
    cout<< "N:" << N <<endl;
    for(int i = 0; i < N; i ++){
        pd1[i] = pd2[i] = 1000 + 20.0 * i;
    }
    //cout << "Memory addresses: \n" << " heap: " << pd1 << " static:" << &buffer << endl;
    cout << "Memory addresses: \n" << " heap: " << pd1 << " static:" << (void*)buffer << endl;
    cout << ((void*)buffer == & buffer) << endl;
    cout << "Memory contents: \n";

    for(i = 0; i < N; i ++){
        cout << pd1[i] << " at " << &pd1[i] << ";";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }

    cout << "\n Calling new and placement new a second time: \n";
    double *pd3, *pd4;
    pd3 = new double[N];
    cout<< "N:" << N <<endl;
    pd4 = new (buffer) double[N]; //placement new, overwrite old data 'buffer'
    for(int i = 0; i < N; i ++){
        pd3[i] = pd4[i] = 1000 + 40.0 * i;
    }
    cout << "Memory contents: \n";
    for(i = 0; i < N; i ++){
        cout << pd3[i] << " at " << &pd3[i] << ";";
        cout << pd4[i] << " at " << &pd4[i] << endl;
    }

    cout << "\n Calling new and placement new a third time: \n";
    delete [] pd1;
    pd1 = new double[N];
    pd2 = new (buffer + N * sizeof(double)) double[N];
    for(i = 0; i < N; i ++){
        pd2[i] = pd1[i] = 1000 + 60.0 * i;
    }
    cout << "Memory contents: \n";
    for(i = 0; i < N; i ++){
        cout << pd1[i] << " at " << &pd3[i] << ";";
        cout << pd2[i] << " at " << &pd4[i] << endl;
    }

    delete[] pd1;
    delete[] pd3;

    return 0;
}
