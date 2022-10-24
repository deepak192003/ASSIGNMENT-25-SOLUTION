#include<iostream>
using namespace std;

class LargestNumber
{
    private:
        int a;
        int b;
        int c;
        int largest;
    public:
        void setVal(int x, int y, int z)
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
            return largest;
        }
        void callargest()
        {
            if(a>b)
            {
                if(a>c)
                {
                    largest=a;
                }
                else
                {
                    largest=c;
                }
            }
            else
            {
                if(b>c)
                {
                    largest=b;
                }
                else
                {
                    largest=c;
                }
            }
        }
};

int main()
{
    LargestNumber l1;
    l1.setVal(67,17,98);
    l1.callargest();
    int a=l1.getlargest();
    cout<<"Largest value is "<<a<<endl;
    return 0;
}