// Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.
#include<iostream>
using namespace std;
class Greatest
{
    private:
        int a;
        int b;
        int c;
        int max;
    public:
        void set(int x,int y,int z)
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
           void calculate()
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
    Greatest g1;
    g1.set(22,12,56);
    g1.calculate();
    cout<<"Greater Number between "<<g1.getA()<<g1.getB()<<g1.getC()<<g1.getlargest();
    return 0;
}