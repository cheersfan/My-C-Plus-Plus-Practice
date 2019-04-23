//
// Created by cheers on 2019-04-16.
//

#include "chapter3.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void my_3_2_main(){

    //3.4
    string str1, str2;
    while (cin >> str1 >> str2){
        //output the biggest string
        cout << "biggest string:" << (str1 >= str2 ? str1 : str2) << endl;

        //output the longest string
        cout << "longest string:" << (str1.size() >= str2.size() ? str1 : str2) << endl;
    }

}

void my_3_3_main(){
    //3.6 change string to XXX
//    string str;
//    while(cin >> str){
//        //for(char &c : str){
//        for(char &c : str){
//            c = 'X';
//        }
//        cout << str << endl;
//    }

    //3.18
//    vector<int> v2(10);
//    vector<int> v3(10,42);
//    vector<int> v4{10};
//    vector<int> v5{10,45};
//    vector<string> v6(10);
//    vector<string> v7{10, "hi"};
//
//    //{0,0,0,0,0,0,0,0,0,0}
//    cout << "v2:" << endl;
//    for(auto s : v2){
//        cout << s << ",";
//    }
//
//    //{42,42,42,42,42,42,42,42,42,42}
//    cout << endl << "v3" << endl;
//    for(auto s : v3){
//        cout << s << ",";
//    }
//
//    //{10}
//    cout << endl << "v4" << endl;
//    for(auto s : v4){
//        cout << s << ",";
//    }
//
//    //{10,42}
//    cout << endl << "v5" << endl;
//    for(auto s : v5){
//        cout << s << ",";
//    }
//
//    //{,,,,,,,,,}
//    cout << endl << "v6" << endl;
//    for(auto s : v6){
//        cout << s << ",";
//    }
//
//    //{hi,hi,hi,hi,hi,hi,hi,hi,hi,hi}
//    cout << endl << "v7" << endl;
//    for(auto s : v7){
//        cout << s << ",";
//    }

    //3.20
    vector<int> test = {0,1,2,3,4,5,6,7,8,9};
    cout << "neighbor sum:" << endl;
    for(int i = 0; i < test.size() - 1; i ++){
        cout << test.at(i) + test.at(i + 1) << ",";
    }
    cout << endl;

    cout << "double end sum:" << endl;
    int size = test.size();
    for(int i = 0; i < (size+1) / 2; i ++){
        cout << test.at(i) + test.at(size - 1 - i) << ",";
    }
    cout << endl;
}

void my_3_4_main(){
    //3.22
//    vector<string> text;
//    string s;
//    while(getline(cin, s)){
//        text.push_back(s);
//        for(auto it = text.begin(); it != text.end() && !it->empty(); it++){
//            for(auto it2 = it->begin(); it2 != it->end(); it2++){
//                *it2 = toupper(*it2);
//            }
//            cout << *it << endl;
//        }
//    }

    //3.24
//    vector<int> test = {0,1,2,3,4,5,6,7,8,9,10};
//    auto iter1 = test.cbegin();
//    vector<int>::const_iterator iter2 = iter1;
//    iter2 ++;
//    //cout << *iter1 << endl;
//    for (;iter2 != test.end();iter1++,iter2++) {
//        //cout << "iter1：" << *iter1 << ",iter2:" << *iter2 << endl;
//        cout << *iter1 + *iter2 << ",";
//    }
//    cout << endl;
//
//    iter1 = test.begin();
//    iter2 = test.end();
//    iter2--;
//    for(;iter1 <= iter2; iter1++, iter2--){
//        cout << *iter1+*iter2 << ",";
//    }
//    cout << endl;

    //3.25
    vector<int> grades{42,65,95,100,39,67,95,76,88,76,83,92,76,93};
    vector<int> statistics(11);
    auto iter_a = grades.begin();
    auto iter_s = statistics.begin();
    for(; iter_a != grades.end(); iter_a ++){
        int t = *iter_a / 10;
        *(iter_s + t) += 1;
    }

    for(auto t : statistics){
        cout << t << ",";
    }
    cout << endl;


}