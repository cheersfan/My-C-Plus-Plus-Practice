//
// Created by root on 12/23/18.
//

#include "14-22-frnd2tmp2.h"
#include <iostream>
using namespace std;

template <typename T>
int HasFriend<T>::ct = 0;

void counts() {
    cout << "int count: " << HasFriend<int>::ct<<endl;
    cout << "double count: " << HasFriend<double>::ct<<endl;
}

void reports(HasFriend<int> & t){
    cout << "HasFriend<int>: " << t.item << endl;
}

void reports(HasFriend<double> & t){
    cout << "HashFriend<double>: " << t.item << endl;
}

void my_frnd2tmp2_main(){
    HasFriend<char> mychar('x');
    counts();

}