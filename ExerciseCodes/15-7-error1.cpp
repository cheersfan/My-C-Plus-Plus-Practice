//
// Created by root on 12/24/18.
//

#include "15-7-error1.h"
#include <iostream>
#include <cfloat>
using namespace std;

//I didn`t use the example code which is computing the `hmeans` in book C++ Primer Plus
//I just try an division to test the abort and exit function

//version 1
double division1(double x, double y){
    if(y == 0){
        cout << "the divisior can`t be ZERO!" << endl;
        //abort();
        //exit(-1);
    }
    return x / y;
}

bool division2(double x, double y, double * ans){
    if(y == 0){
        cout << "the divisior can`t be ZERO!" << endl;
        *ans = DBL_MAX;
        return false;
    }
    *ans = x / y;
    return true;
}


double division3(double x, double y){
    if(y == 0){
        //cout << "the divisior can`t be ZERO!" << endl;
        throw ("the input number is not right!");
    }
    return x / y;
}
void my_error1_main(){
    double x,y,ans;
    while (cin >> x && cin >> y){
        //cout << "the division answer is: " << division1(x,y) << endl;
        if(division2(x,y,&ans)){
            cout << "the division answer is: " << ans << endl;
        }else{
            cout << "Wrong divisior, try again !" << endl;
        }

    }
    cout << "final" << endl;
}

void my_error2_main(){
    double x,y,ans;
    while (cin >> x && cin >> y){
        //cout << "the division answer is: " << division1(x,y) << endl;
        try{
            ans = division3(x,y);
        }catch(const char * s){
            cout << s << endl;
            cout << "Enter the new number !" << endl;
            continue;
        }

        cout << ans << endl;
    }
    cout << "final" << endl;
}