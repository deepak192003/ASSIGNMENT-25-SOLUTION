// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.
#include<iostream>
using namespace std;
class Time
{
private:
   int hour;
   int min;                     //instance members variables
   int sec;
public:
    void set( int h,int m,int s)    //instance member function
    {
        hour=h;
        min=m;
        sec=s;
    }
    void display()
    {
       cout<<hour<<" hr "<<min<<" min "<<sec<<" sec ";
    }
};

int main()
{
    Time t1,t2;
    int h,m,s;
    cout<<"Enter hours Minutes and secounds: ";
    cin>>h>>m>>s;
    t1.set(h,m,s);
    t1.display();
}