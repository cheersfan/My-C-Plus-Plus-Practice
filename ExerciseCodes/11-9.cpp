//
// Created by root on 12/7/18.
//

#include "11-9.h"
#include <cstring>
#include <string>

Complex::Complex() {
    real = imag = 0;
}

Complex::Complex(double r, double i){
    real = r;
    imag = i;
}

Complex::~Complex(){}

void Complex::set_real(double r) {
    real = r;
}

void Complex::set_imag(double i) {
    imag = i;
}


Complex Complex::operator+(Complex &A) const {
    return Complex(real+A.real, imag+A.imag);
}

Complex Complex::operator-(Complex &A) const {
    return Complex(real-A.real, imag-A.imag);
}

Complex Complex::operator*(Complex &A) const{
    return Complex(real*A.real - imag*A.imag, real*A.imag + imag*A.real);
}
Complex Complex::operator*(double n) const{
    return Complex(real*n, imag*n);
}

//friend function
Complex operator*(double n, const Complex & A){
    return A * n;
}

Complex Complex::operator~() const{
    return Complex(real, -imag);
}

std::ostream & operator<<(std::ostream & os, const Complex & A){
    std::cout << "(" << A.real << "," << A.imag << ")" << std::endl;
    return os;
}

std::istream & operator>>(std::istream & os, Complex & A){
    //why can`t `os>>` works, but `os<<` can work fluently???

    std::cout << "real:";
    char* input_real = new char[10];
    char* input_imag = new char[10];
    std::cin >> input_real;
    A.set_real(atof(input_real));
    std::cout << "imaginary:";
    std::cin >> input_imag;
    A.set_imag(atof(input_imag));

    return os;
}

void my_11_main7(){
    Complex a(3.0,4.0);
    Complex c;
    std::cout << a << std::endl;
    std::cout << "Enter a complex number (q to quit): \n";
    while (std::cin >> c){
        std::cout << "c is " << c << '\n';
        std::cout << "complex conjugate is " << ~c << '\n';
        std::cout << "a is " << a << '\n';
        std::cout << "a + c is " << a + c << '\n';
        std::cout << "a - c is " << a - c << '\n';
        std::cout << "a * c is " << a * c << '\n';
        std::cout << "2 * c is " << 2 * c << '\n';
        std::cout << "Enter a complexx number(q to quit!): \n ";
    }

    std::cout << "Done! \n";

}
