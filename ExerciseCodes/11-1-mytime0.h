//
// Created by root on 12/5/18.
//

#ifndef MYCLIONPROJECT_11_1_MYTIME0_H
#define MYCLIONPROJECT_11_1_MYTIME0_H

#include <iostream>

class Time{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time & t) const;
    Time operator-(const Time & t) const;
    Time operator*(double t) const;

    friend Time operator*(double m, const Time & time);

    //Time operator*(double m, const Time & time);

    void Show() const ;
};

#endif //MYCLIONPROJECT_11_1_MYTIME0_H
