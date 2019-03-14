//
// Created by root on 12/6/18.
//

#ifndef MYCLIONPROJECT_11_13_VECTOR_H
#define MYCLIONPROJECT_11_13_VECTOR_H

#include <iostream>

namespace VECTOR{
    class Vector{
    public:
        enum Mode{ RECT,POL};
        //RECT for rectangular, POL for Polar modes
    private:
        double  x;
        double  y;
        double mag;
        double ang;
        Mode mode;

        void set_mag();
        void set_ang();
        void set_x();
        void set_y();

    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);

        ~Vector();

        double xvalue() const{return x;};
        double yvalue() const{return y;};
        double magvalue() const{return mag;};
        double aangval() const{return ang;};
        void polar_mode();
        void rect_mode();

        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;

        friend Vector operator*(double n, const Vector & a);
        friend std::ostream &operator <<(std::ostream & os, const Vector & v);

    };
}

#endif //MYCLIONPROJECT_11_13_VECTOR_H
