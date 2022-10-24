// Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.
#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
      int num;
      int reverse;
    public:
        void setvalue(int x)
        {
            num=x;
        }
        int getA()
        {
            return num;
        }
        int getreverse()
        {
            return reverse;
        }
        void calreverse()
        {
            int rem,rev=0;
            while (num!=0)
            {
                rem=num%10;
                rev=rev*10+rem;
                num=num/10;
            }
            reverse=rev;
        }
};
int main()
{
    ReverseNumber n1;
    n1.setvalue(2345);
    n1.calreverse();
    cout<<"Reverse of "<<n1.getA()<<" is "<<n1.getreverse();
    return 0;
}