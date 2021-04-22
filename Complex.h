#include<iostream>

using namespace std;

class Complex 
{
    public:

    Complex(double x, double y);
    Complex();
    double abs() const;
    Complex operator +(Complex &cnumber) const;
    Complex operator -(const Complex &cnumber) const;
    Complex operator *(const Complex &cnumber) const;
    Complex operator /(const Complex &cnumber) const;
    Complex operator ~() const;
    double operator [](int index) const;
    bool operator ==(const Complex &cnumber) const;
    friend ostream& operator <<(ostream& out, const Complex& cnumber);
    Complex operator +(double realNumber) const;

    private:
    double real, imag;
};

