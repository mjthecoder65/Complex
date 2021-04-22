#include<iostream>
#include<cmath>
#include "Complex.h"
using namespace std;

Complex::Complex(double x, double y)
{
    real = x;
    imag = y;
}

Complex::Complex(): real(0),imag(0){}

double Complex::abs() const
{
    return sqrt((real * real) + (imag * imag));
}
Complex Complex::operator +(Complex& cnumber) const
{
    return Complex(real + cnumber.real, imag + cnumber.imag);
}

Complex Complex::operator -(const Complex &cnumber) const
{
    Complex temp;
    temp.real = real - cnumber.real;
    temp.imag = imag - cnumber.imag;
    return temp;
}
Complex Complex::operator *(const Complex &cnumber) const
{
    Complex result;
    result.real = (real * cnumber.real) + (imag * cnumber.imag * -1);
    result.imag = (real * cnumber.imag) + (cnumber.real * imag);
    return result;
}
Complex Complex::operator /(const Complex &cnumber) const
{
    double div = (cnumber.real * cnumber.real) + (cnumber.imag * cnumber.imag);
    Complex temp;
    temp.real =(real * cnumber.real) + (imag * cnumber.imag);
    temp.real /= div;
    temp.imag=(imag * cnumber.real) - (real * cnumber.imag);
    temp.imag /= div;
    return temp;
}
Complex Complex::operator ~() const
{
    return Complex(real, -1 * imag);
}

double Complex::operator [](int index) const
{
    return index == 0 ? real : imag;
}

bool Complex::operator == (const Complex &cnumber) const
{
    return real == cnumber.real && imag == cnumber.imag;
}

Complex Complex::operator +(double realNumber) const
{
    return Complex(real + realNumber, imag);
}

ostream& operator <<(ostream& out, const Complex& cnumber)
{
    if (cnumber.imag < 0) out << cnumber.real << " - " <<  (-1 * cnumber.imag) << "i";
    else out << cnumber.real << " + " <<  cnumber.imag << "i";
    return out;
}