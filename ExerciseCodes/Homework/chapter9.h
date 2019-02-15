//
// Created by root on 1/29/19.
//

#ifndef MYCLIONPROJECT_CHAPTER9_H
#define MYCLIONPROJECT_CHAPTER9_H

#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

void my_chapter9_main();

//9-4 find x between a and b, return true or false
bool search_vec(vector<int>::iterator a, vector<int>::iterator b, int x);

//9-5 find x between a and b, return iterator point to x
vector<int>::iterator search_vec_2(vector<int>::iterator a, vector<int>::iterator b, int x);

//9-15
bool compareVec1Vec2(vector<int> vec1, vector<int> vec2);

//9-16
bool compareVecList(vector<int> myvec, list<int>mylist);

//9-18
void readToDeque();

//9-20
void copyListToTwoDeque();


//9-24
void getFirstElement();

//9-26
void deleteElement();

#endif //MYCLIONPROJECT_CHAPTER9_H

