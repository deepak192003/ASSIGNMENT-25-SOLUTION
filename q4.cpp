// Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.
#include<iostream>
using namespace std;
class LargestNumber
{
private:
   int a;
    int b;
    int c;
    int max;
public:
   void setdata(int x,int y,int z)
   {
        a=x;
        b=y;
        c=z;
   }
   int getA()
   {
    return a;
   }
   int getB()
   {
    return b;
   }
   int getC()
   {
    return c;
   }
   int getlargest()
   {
    return max;
   }
   void calculatelargestnumber()
   {
        if(a>b)
        {
            if(a>c)
            {
                max=a;
            }
            else
            {
                max=c;
            }
        }
        else
        {
            if(b>c)
            {
                max=b;
            }
            else
            {
                max=c;
            }
        }
   }
};
int main()
{
    LargestNumber l1;
    l1.setdata(21,13,23);
    l1.calculatelargestnumber();
    cout<<"Largest number between "<<l1.getA()<<"\t"<<l1.getB()<<"\t"<<l1.getC()<<" is "<<l1.getlargest();
    return 0;
}