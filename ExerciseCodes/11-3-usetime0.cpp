//
// Created by root on 12/5/18.
//

#include "11-3-usetime0.h"


void my_usetime0_main(){
    using std::cout;
    using std::endl;

    Time planning;
    Time coding(2,40);
    Time fixing(5,55);
    Time total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    total.Show();
    cout << endl;

    Time morefixing(3,28);
    cout << "more fixing time = ";
    morefixing.Show();
    cout << endl;

    cout << "morefixing.operator+(total) = ";
    total = morefixing.operator+(total);
    total.Show();
    cout << endl;

    total = 2.7 * fixing;
    total.Show();
    cout << endl;

   // total = fixing * 2.8;
    total.Show();
    cout << endl;
}