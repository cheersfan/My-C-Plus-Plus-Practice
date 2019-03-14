//
// Created by root on 12/14/18.
//

#ifndef MYCLIONPROJECT_13_X_MYDECONSTRUCTORTEST_H
#define MYCLIONPROJECT_13_X_MYDECONSTRUCTORTEST_H

class myClassA{
private:
    char * myArrayA;

public:
    myClassA();
   virtual ~myClassA();
};

class myClassB : public myClassA{
private:
    char * myArrayB;
public:
    myClassB();
    ~myClassB();
};

void my_destructortest_main();

#endif //MYCLIONPROJECT_13_X_MYDECONSTRUCTORTEST_H
