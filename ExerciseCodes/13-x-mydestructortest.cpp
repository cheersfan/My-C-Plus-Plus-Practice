//
// Created by root on 12/14/18.
//

#include <iostream>
#include <cstring>
#include "13-x-mydestructortest.h"

using namespace std;
myClassA::myClassA() {
    myArrayA = new char[6];
    strcpy(myArrayA,"test1");
    cout << "This is the construcotr of myClassA! \n";
}

myClassA::~myClassA() {
    delete[] myArrayA;
    cout << "This is the destrucotr of myClassA! \n";
}

myClassB::myClassB() {
    //myClassA();
    myArrayB = new char[6];
    strcpy(myArrayB, "test2");
    cout << "This is the construcotr of myClassB! \n";
}

myClassB::~myClassB() {
    delete[] myArrayB;
    cout << "This is the destrucotr of myClassB! \n";
}

void my_destructortest_main(){
    {

        myClassA * A = new myClassB();
        delete A;

        cout << "***" << endl;

        myClassB * B = new myClassB();
        delete B;
    }

}