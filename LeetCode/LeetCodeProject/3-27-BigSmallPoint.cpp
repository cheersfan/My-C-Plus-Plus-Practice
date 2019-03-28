//
// Created by cheers on 2019-03-27.
//

#include "3-27-BigSmallPoint.h"

void my_big_small_point_main(){
    vector<char> vec;
    int n;
    cin >> n;
    int len = n * 9;
    getchar();
    string str;
    cin >> str;
    int x = str.size() / 9;
    for(int i = 0; i < str.size(); i ++){
        vec.push_back(str.at(i));
    }

    for(int i = 0; i < x-1; i ++){
        if(vec[i*9] == '0'){
            for(int j = 8; j > 0; j --){
                cout << vec[i * 9 + j];
            }
            cout << ' ';
        }else{
            for(int j = 1 ; j < 9; j++){
                cout << vec[j + i * 9];
            }
            cout << ' ';
        }
    }
    if(vec[(x-1) * 9] == '0')
    {
        for(int j = 8; j > 0; j --){
            cout << vec[(x-1) * 9 + j];
        }
    }else{
        for(int j = 1; j < 9; j++){
            cout << vec[j + (x-1) * 9];
        }
    }
    //cout << endl;

    int m;
    cin >> m;





}


//#include <iostream>
//#include <vector>
//using namespace std;
//int main(){
//    vector<char> vec;
//    int n;
//    cin >> n;
//    string str;
//    cin >> str;
//    for(int i = 0; i < str.size(); i ++){
//        vec.push_back(str.at(i));
//    }
//
//    for(int i = 0; i < vec.size(); i = i + 9){
//        if(vec[i] == '0'){
//            for(int j = i+8; j > 0; j --){
//                cout << vec[j];
//            }
//        }else if(vec[i] == '1'){
//            for(int j = i + 1; j <= i + 8; j++){
//                cout << vec[j];
//            }
//        }
//
//        if((i+9) < vec.size()){
//            cout << ' ';
//        }
//    }
//    cout << endl;
//}