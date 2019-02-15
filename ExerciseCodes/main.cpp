#include <iostream>
#include <stdio.h>
//#include "signal-function-test.h"
#include "Homework/chapter9.h"
using namespace std;

void swap1(int * a, int *b){
    //cout << "a: " << a << " ,b: " << b << endl;
    int temp = *a;
    *a = *b;
    *b =temp;
   // cout << "a: " << *a << " ,b: " << *b << endl;
}

void swap2(int & a, int &b){
    int temp = a;
    a = b;
    b =temp;
}

int main(){

    //cout << sizeof(long) << endl;
    my_chapter9_main();
    return 0;
}


