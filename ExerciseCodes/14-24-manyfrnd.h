//
// Created by root on 12/23/18.
//



#ifndef MYCLIONPROJECT_14_24_MANYFRND_H
#define MYCLIONPROJECT_14_24_MANYFRND_H
//#include <form.h>
template <typename T>
class MyFriend{
private:
    T item;
public:
    MyFriend(const T & i) : item(i){};
    template <typename C, typename D> friend void show2(C &, D&);
    //friend void show3(T & t);//this is a bad example, it`s not either bound template or unbound template for friend function
};


void my_manyfrnd2_main();
#endif //MYCLIONPROJECT_14_24_MANYFRND_H
