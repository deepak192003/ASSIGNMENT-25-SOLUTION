//  Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.
#include<iostream>
using namespace std;
class Square
{
    private:
        int num;
        int sq;
        static int count;
    public:
        void setNum(int a)
        {
            num=a;
        }
        void calSq()
        {
            sq=num*num;
            count++;
        }
        static int getCount()
        {
            return count;
        }
        int getSq()
        {
            return sq;
        }
};

int Square::count=0;

int main()
{
        Square s1,s2,s3;
        int a=s1.getCount();
        cout<<endl;
        s1.setNum(8);
        s1.calSq();
        int b=s1.getSq();
        s1.calSq();
        int c=s1.getSq();
        int d=s1.getCount();
        cout<<"count : "<<a<<endl;
        cout<<"Square is : "<<b<<endl;
        cout<<"Square is : "<<c<<endl;
        cout<<"count is : "<<d<<endl;
        return 0;
}