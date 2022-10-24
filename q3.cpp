// Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
#include<iostream>
using namespace std;
class factorial
{
private:
    int n;
   int fact;
public:
   void setN(int x)
   {
        n=x;
   }
   int getN()
   {
    return n;
   }
   int getfactorial()
   {
    return fact;
   }
    void calculatefactorial()
    {
        int f=1;
        if(n<=0)
        {
            fact=1;
            return;
        }
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
        fact=f;
    }
};


int main()
{
   factorial f;
   f.setN(5);
   f.calculatefactorial();
   cout<<"Factorial of "<<f.getN()<<"is"<<f.getfactorial();
   return 0;
}