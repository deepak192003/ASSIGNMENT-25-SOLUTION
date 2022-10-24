// Define a class Circle and define an instance member function to find the area of the
// circle.
#include<iostream>
using namespace std;
class Circle
{
    private:
        int radius;
        float area;

    public:
        void setNUm(int r)
        {
            radius=r;
        }
        void circlearea()
        {
            area=3.14*radius*radius;
        }
        float getArea()
        {
            return area;
        }
};
int main()
{
    Circle r;
    r.setNUm(4);
    r.circlearea();
    float a=r.getArea();
    cout<<"Area of circle"<<" is "<<a;
}