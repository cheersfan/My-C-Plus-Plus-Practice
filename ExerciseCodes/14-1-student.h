//
// Created by root on 12/17/18.
//

#ifndef MYCLIONPROJECT_14_1_STUDENT_H
#define MYCLIONPROJECT_14_1_STUDENT_H

#include <iostream>
#include <string>
#include <valarray>

class Student{
private:
    typedef std::valarray<double> ArrayDB;
    std::string name;
    ArrayDB scores;

    std::ostream & arr_out(std::ostream &os) const;

public:
    //the `scores()` here doesn`t do anything here, and the code can run properly with out it!
    Student():name("Null Student"){};
    explicit Student(const std::string & name):name(name),scores(){};
    explicit Student(int n) : name("Null Student"),scores(n){};
    Student(const std::string & s, const ArrayDB & a):name(s),scores(a){};
    Student(const char* str,const double *pd, int n):name(str),scores(pd,n){};
    ~Student(){};

    ArrayDB getScores(){return scores;};

    double Average()const;
    const std::string & Name()const;
    double & operator[](int i);
    double operator[](int i) const;

    //friend function
    friend std::istream & operator >> (std::istream & is, Student & stu);
    friend std::istream & getline(std::istream & is, Student & stu);

    friend std::ostream & operator << (std::ostream & os, const Student & stu);

};

#endif //MYCLIONPROJECT_14_1_STUDENT_H
