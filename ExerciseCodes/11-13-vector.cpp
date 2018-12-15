//
// Created by root on 12/6/18.
//

#include "11-13-vector.h"
#include <cmath>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR{
    const double Rad_to_deg = 45.0 / atan(1.0);

    Vector::Vector() {
        x = y = mag = ang = 0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode form) {
        if(form == RECT){
            x = n1;
            y = n2;
            mode = RECT;
            set_mag();
            set_ang();
        }else if(form == POL){
            mag = n1;
            ang = n2;
            mode = POL;
            set_x();
            set_y();
        }else{
            cout << "Incorrect 3rd argument to Vector() --";
            cout << "vector set to 0 \n";
            Vector();
        }
    }

    Vector::~Vector() {}

    //calculate magnitude from x and y
    void Vector::set_mag() {
        mag = sqrt(x * x + y * y);
    }

    //calculate ang from x and y
    void Vector::set_ang() {
        if(x == 0.0 || y == 0.0){
            ang = 0;
        }else{
            ang = atan2(y,x);
        }
    }

    //set x from polar coordinate
    void Vector::set_x() {
        x = mag * cos(ang);
    }

    void Vector::set_y() {
        y = mag * sin(ang);
    }

    void Vector::reset(double n1, double n2, VECTOR::Vector::Mode form) {
        mode = form;
        if(mode == RECT){
            x = n1;
            y = n2;
            set_ang();
            set_mag();
        }else if(mode == POL){
            mag = n1;
            ang = n2;
            set_y();
            set_x();
        }else{
            cout << "Incorrect 3rd argument to Vector() --";
            cout << "vector set to 0 \n";
            x = y = mag = ang = 0;
            mode = RECT;
        }
    }

    void Vector::polar_mode() {
        mode = POL;
    }

    void Vector::rect_mode() {
        mode = RECT;
    }

    Vector Vector::operator+(const VECTOR::Vector &b) const {
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const VECTOR::Vector &b) const {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-() const {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const {
        return Vector(x * n, y * n);
    }

    Vector operator*(double n, const Vector &a) {
       // Vector v((a*n).x, (a*n).y);
       // return v;
       return a * n;
    }

    std::ostream & operator<<(std::ostream & os, const Vector & v){
        if(v.mode == Vector::RECT){
            os << "(x,y) = {" << v.x << ", " << v.y << ")";
        }else if(v.mode == Vector::POL){
            os << "(m,a) = (" << v.mag << ", " << v.ang * Rad_to_deg << ")";
        }else{
            os << "Vector object mode is invalid";
        }

        return os;
    }
}//end namespace VECTOR