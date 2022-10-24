// Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc
#include<iostream>
using namespace std;
class Area
{
    public:
        int length;
        int breadth;
        int side;
        int sqarea;
        int radius;
        float circlearea;
        int rectanglearea;
        int rectarea;
    private:
        void setA(int l,int b)
        {
            length=l;
            breadth=b;
        }
        void setB(int s)
        {
            side=s;
        }
        void setC(int r)
        {
            radius=r;
        }
        void calsqarea()
        {
            sqarea=side*side;
        }
        void calcirclearea()
        {
            circlearea=3.14*radius*radius;
        }
        void rectanglearea()
        {
            rectarea=length*breadth;
        }

};
int main()
{
    Area a;
}