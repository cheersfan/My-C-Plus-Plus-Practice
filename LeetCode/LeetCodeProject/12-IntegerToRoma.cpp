//
// Created by root on 2/10/19.
//

#include "12-IntegerToRoma.h"
#include <iostream>

void my_integertoroma_main(){
    Solution s;
    int x;
    while (cin >> x){
        cout << s.intToRoman(x) << endl;
    }
}

string Solution::intToRoman(int num){
    string array0[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string array1[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string array2[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string array3[] = {"", "M", "MM", "MMM"};

    cout << array3[num/1000] << " ";
    cout << array2[(num % 1000) /100] << " ";
    cout << array1[(num % 100 )/10] << " ";
    cout << array0[(num % 10)] << " ";
    cout << endl;
    string ans = array3[num/1000] + array2[(num % 1000)  / 100] + array1[(num % 100) / 10] + array0[num % 10];
    return ans;

}