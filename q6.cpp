// Define a class Square to find the square of a number and write a C++ program to
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
        void calsq()
        {
            sq=num*num;
            count++;
        }
          static int getcount()
        {
            return count;
        }
        int getsq()
        {
            return sq;
        }
      
};
int Square::count=0;
int main()
{
    Square s1,s2,s3;
   int  a=s1.getcount();
   cout<<endl;
   s1.setNum(8);
   s1.calsq();
   int b=s1.getsq();
   s1.calsq();
   int c=s1.getsq();
   int d=s1.getcount();
   cout<<"Count: "<<a;
   cout<<endl;
   cout<<"Square is "<<b<<endl;
   cout<<"Square is "<<c<<endl;
   cout<<"Count : "<<d<<endl;

}