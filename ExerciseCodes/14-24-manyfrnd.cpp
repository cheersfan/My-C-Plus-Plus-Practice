//
// Created by root on 12/23/18.
//

#include "14-24-manyfrnd.h"
#include <iostream>
using namespace std;

template <typename C, typename D> void show2(C& c, D& d){
    cout << c.item << " , " << d.item << endl;
}

//function show3 can not work!
//template <typename T>
// void show3(T & t){
//    cout << t.item << endl;
//}

void my_manyfrnd2_main(){
    MyFriend<int> hfi1(10);
    MyFriend<int> hfi2(20);
    MyFriend<double> hfdb(10.2);
    show2(hfi1,hfi2);

}


