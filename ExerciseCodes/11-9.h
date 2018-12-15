//
// Created by root on 12/7/18.
//

#ifndef MYCLIONPROJECT_11_9_H
#define MYCLIONPROJECT_11_9_H

#include <iostream>

class Complex{
private:
    double real;
    double imag;



public:
    Complex();
    Complex(double r, double i);
    ~Complex();

    void set_real(double r);
    void set_imag(double i);

    Complex operator+(Complex & A) const;
    Complex operator-(Complex & A) const;
    Complex operator*(Complex & A) const;
    Complex operator*(double n) const;
    friend Complex operator*(double n,const Complex & A);
    Complex operator~() const;

    friend std::ostream & operator<<(std::ostream & os, const Complex & A);
    friend std::ostream & operator>>(std::ostream & os, Complex & A);
};

void my_11_main7();

#endif //MYCLIONPROJECT_11_9_H
