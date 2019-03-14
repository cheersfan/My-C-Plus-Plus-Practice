//
// Created by root on 12/23/18.
//

#ifndef MYCLIONPROJECT_14_17_ARRAYTP_H
#define MYCLIONPROJECT_14_17_ARRAYTP_H

#include <iostream>
#include <cstdlib>
using namespace std;

template <class T, int n>
class ArrayTp{
private:
    T ar[n];

public:
    ArrayTp(){};
    explicit ArrayTp(const T & v);
    virtual T & operator[](int i);
    virtual T operator[](int i) const;
};

template <class T, int n>
ArrayTp<T,n>::ArrayTp(const T & v){
    for(int i = 0; i < n; i ++){
        ar[i] = v;
    }
}

template <class T,int n>
T & ArrayTp<T, n>::operator[](int i) {
   if(i < 0 || i >= n){
       cerr << "Error in array limit: " << i << " is out of range \n.";
       exit(EXIT_FAILURE);
   }
   return ar[i];
}

template <class T,int n>
T ArrayTp<T, n>::operator[](int i) const{
    if(i < 0 || i >= n){
        cerr << "Error in array limit: " << i << " is out of range \n.";
        exit(EXIT_FAILURE);
    }
    return ar[i];
}

#endif //MYCLIONPROJECT_14_17_ARRAYTP_H
