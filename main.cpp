#include<iostream>
#include "Complex.h"

using namespace std;

int main(int argc, char *argv[])
{
    Complex A(1, 1), B(1, 2);
    cout << A << " + " << B << " = "  << A + B << endl;
    cout << A << " - " << B << " = " << A - B << endl;
    cout << A << " * " << B << " = " << A * B << endl;
    cout << A << " / " << B << " = " << A / B << endl;
    cout << "Conjugate of " << A << " is " << ~A << endl;
    cout << "real part of " << B << " is " << B[0]<< endl;
    cout << "imaginary part of " << B << " is " << B[1] << endl;
    cout << "absolute value of  " << B << " is " << B.abs()<< endl;
    cout << A << " and " << B << " are " << ((A == B)? "equal" : "not equal") << endl;
    cout << A << " + " << 1.2 << " = " << A + 1.2 << endl;

    return 0;
}
