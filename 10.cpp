#include <iostream>
using namespace std;

class complex {
    int real, imag;
public:
    complex() {}
    complex(int r, int i) {
        real = r;
        imag = i;
    }
    void show() {
        cout << real << " ";
        cout << imag << "\n";
    }
    complex operator+(const complex& op2) const;
    complex operator-(const complex& op2) const;
    complex operator++();  // Prefix increment
    complex operator++(int);  // Postfix increment
    complex operator--();  // Prefix decrement
    complex operator--(int);  // Postfix decrement
    bool operator==(const complex& op2) const;
};

complex complex::operator+(const complex& op2) const {
    complex temp;
    temp.real = op2.real + real;
    temp.imag = op2.imag + imag;
    return temp;
}

complex complex::operator-(const complex& op2) const {
    complex temp;
    temp.real = real - op2.real;
    temp.imag = imag - op2.imag;
    return temp;
}

complex complex::operator++() {
    ++real;
    ++imag;
    return *this;
}

complex complex::operator++(int) {
    complex temp(*this);
    ++real;
    ++imag;
    return temp;
}

complex complex::operator--() {
    --real;
    --imag;
    return *this;
}

complex complex::operator--(int) {
    complex temp(*this);
    --real;
    --imag;
    return temp;
}

bool complex::operator==(const complex& op2) const {
    return (op2.real == real) && (op2.imag == imag);
}

int main() {
    complex comp1(10, 20), comp2(5, 30);
    complex comp3;

    comp1.show();
    comp2.show();

    cout << "Addition of complex numbers:";
    comp3 = comp1 + comp2;
    comp3.show();

    cout << "Subtraction of complex numbers:";
    comp3 = comp1 - comp2;
    comp3.show();

    cout << "Checking if the 2 complex numbers are equal\n";
    comp1.show();
    comp2.show();
    bool result = comp1 == comp2;
    if (result)
        cout << "Numbers are the same\n";
    else
        cout << "Numbers are different\n";

    cout << "Incrementing complex number:";
    comp1.show();
    ++comp1;
    cout << "After increment:";
    comp1.show();

    cout << "Decrementing complex number:";
    comp2.show();
    --comp2;
    cout << "After decrement:";
    comp2.show();

    return 0;
}