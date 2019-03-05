//
// Created by root on 1/29/19.
//
#include "chapter9.h"



void my_chapter9_main(){

    //********
    //9-2,9-4
    //********
//    vector<deque<int>> vec = {{1,2,3,4,5,6,7,8,9}};
//    cout << search_vec(vec.begin(), vec.end(), 8) << endl;

    //*******
    //9-11
    //*******
//    vector<int> vec1 = {1,2,3};
//    vector<int> vec2(3,1);
//    vector<int> vec3(vec2.begin(), vec2.end());
//    vector<int> vec4(3);
//    vector<int>  vec5(vec1);
//    vector<int> vec6{1,2,3};

    //*******
    //9-14
    //*******

//    char aa = 'a';
//    char bb = 'b';
//    char cc = 'c';
//    char* aaa = &aa;
//    char* bbb = &bb;
//    char* ccc = &cc;
//    list<char*> mylist = {&aa,&bb,&cc};
//
//    list<char*>::iterator beg = mylist.begin();
//    list<char*>::iterator end = mylist.end();
//    vector<string> myvector(mylist.begin(),mylist.end());
//    vector<string>::iterator iter = myvector.begin();
//    while (iter != myvector.end()){
//        cout << *iter << " ";
//        iter ++;
//    }
//
//    list<char*> mylist2 = {"hello", "my", "world"};
//    vector<string> myvector2;
//    myvector2.assign(mylist2.begin(),mylist2.end());
//    vector<string>::iterator iter2 = myvector2.begin();
//    while (iter2 != myvector2.end()){
//        cout << *iter2 << " ";
//        iter2 ++;
//    }

    //********
    //9-15
    //********
//    vector<int> vec1 = {1,2,3,4,5,6};
//    vector<int> vec2 = {1,2,3,4,5,6};
//    vector<int> vec3 = {1,2,3};
//    cout << compareVec1Vec2(vec1, vec2);
//    cout << compareVec1Vec2(vec3, vec2);

    //********
    //9-16
    //********
//    vector<int> vec1 = {1,2,3,4,5,6};
//    list<int> list1 = {1,2,3,4,5,6};
//    list<int> list2 = {1,2,3};
//    cout << compareVecList(vec1, list1);
//    cout << compareVecList(vec1, list2);

    //********
    //9-18
    //********
//    readToDeque();

    //********
    //9-20
    //********
//    copyListToTwoDeque();

    //********
    //9-24
    //********
//    getFirstElement();

    //********
    //9-26
    //********
    deleteElement();
}

//9-4 find x between a and b, return true or false
bool search_vec(vector<int>::iterator a, vector<int>::iterator b, int x){
    while(a != b){
        if(*a == x){
            return true;
        }
        a++;
    }
    return false;
}

//9-5 find x between a and b, return iterator point to x
vector<int>::iterator search_vec_2(vector<int>::iterator a, vector<int>::iterator b, int x){
    while(a != b){
        if(*a == x){
            return a;
        }
        a++;
    }
    return b;
}

//9-15
bool compareVec1Vec2(vector<int> vec1, vector<int> vec2){
    bool flag = false;
    if(vec1.size() == vec2.size()){
        vector<int>::iterator beg1 = vec1.begin();
        vector<int>::iterator beg2 = vec2.begin();
        while (beg1 != vec1.end()){
            if(*beg1 == *beg2){
                beg1 ++;
                beg2 ++;
            }else{
                break;
            }
        }
        flag = true;
    }
    return flag;
}

//9-16
bool compareVecList(vector<int> myvec, list<int>mylist){
    bool flag = false;
    if(myvec.size() == mylist.size()){
        vector<int>::iterator beg1 = myvec.begin();
        list<int>::iterator beg2 = mylist.begin();
        while (beg1 != myvec.end()){
            if(*beg1 == *beg2){
                beg1 ++;
                beg2 ++;
            }else{
                break;
            }
        }
        flag = true;
    }
    return flag;
}

//9-18
void readToDeque(){
    string str;
    deque<string> mydeque;
    while(cin >> str && str != "-1"){
        mydeque.push_back(str);
    }

    deque<string>::iterator iter = mydeque.begin();
    while (iter != mydeque.end()){
        cout << *iter << ",";
        iter ++;
    }
    cout << endl;
}

//9-20
void copyListToTwoDeque(){
    list<int> mylist = {1,2,3,4,5,6,7};

    vector<int> myvec = {1,2,3,4,5,6,7};
    vector<int>::iterator myiter = myvec.begin();
    vector<int>::iterator testiter = myiter ++;
    cout << *testiter << endl;
    myvec.insert(myiter,9);
    cout << *testiter << endl;

    deque<int> que1;
    deque<int> que2;

    list<int>::iterator iter = mylist.begin();
    while (iter != mylist.end()){
        if(*iter % 2 == 0){
            que1.push_back(*iter);
        }else{
            que2.push_back(*iter);
        }
        iter ++;
    }

    cout << "even" << endl;
    deque<int>::iterator iterdeque = que1.begin();
    while (iterdeque != que1.end()){
        cout << *iterdeque << " ";
        iterdeque++;
    }
    cout << endl;

    cout << "odd" << endl;
    iterdeque = que2.begin();
    while (iterdeque != que2.end()){
        cout << *iterdeque << " ";
        iterdeque++;
    }
    cout << endl;
}

//9-24
void getFirstElement(){
    vector<int> vec = {1,2,3};
    cout << vec[0] << endl;
    cout << vec.at(0) << endl;
    cout << *vec.begin() << endl;
    cout << vec.front() << endl;
}

//9-26
void deleteElement(){
    int ia[] = {1,2,3,4,5,6};
    //vector<int> vec(ia, ia+6);
    //list<int> mylist(ia, ia+6);

    vector<int> vec;
    list<int> mylist;
    vec.assign(ia, ia + 6);
    mylist.assign(ia, ia + 6);


    cout << "odd" << endl;
    vector<int>::iterator itervec = vec.begin();
    while (itervec != vec.end()){
        if(*itervec % 2 == 0){
            itervec = vec.erase(itervec);
        } else{
            cout << *itervec << " ";
            itervec ++;
        }
    }
    cout << endl;
    cout << "even" << endl;

    list<int>::iterator iterlist = mylist.begin();
    while (iterlist != mylist.end()){
        if(*iterlist % 2 == 1){
            iterlist = mylist.erase(iterlist);
        }else{
            cout << *iterlist << " ";
            iterlist ++;
        }
    }
    cout << endl;
}