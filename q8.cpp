// Define a class Rectangle and define an instance member function to find the area of
// the rectangle
#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int length;
        int breadth;
        int area;
    public:
        void setNum(int l,int b)
        {
            length=l;
            breadth=b;
        }
        int getA()
        {
            return length;
        }
        int getB()
        {
            return breadth;
        }
        void calarea()
        {
            area=length*breadth;
        }
        int getarea()
        {
            return area;
        }
};
int main()
{
    Rectangle r1;
    r1.setNum(3,4);
    r1.calarea();
    int a=r1.getarea();
    cout<<"Area of rectangle is"<<a;
}