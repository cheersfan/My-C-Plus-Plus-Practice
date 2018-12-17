//
// Created by root on 12/17/18.
//

#include "14-3-use_stuc.h"
#include "14-1-student.h"
#include <iostream>
using namespace std;

void my_use_stuc_main(){
    string name = "fanxf";
    Student stuc(name);
    cout << stuc.getScores()[0] << endl;
}
