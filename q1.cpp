// Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number
#include<iostream>
using namespace std;
class Complex
{
private:
   int real;
   int img;

public:
    void set( int x,int y)
    {
        real=x;
        img=y;
    }
    void print(Complex c)
    {
        cout<<real<<" "<<"+"<<" "<<img<<"i"<<endl;
        cout<<c.real<<" "<<"+"<<" "<<c.img<<"i"<<endl;
    }
};

int main()
{
    Complex c1,c2;
    c1.set(12,13);
    c2.set(21,23);
    c1.print(c2);
}