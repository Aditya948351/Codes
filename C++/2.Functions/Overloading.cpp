//Function Overloading: Same Function Names But Different Parameters.
#include<iostream>
using namespace std;

void Swap(int &a , int &b) //pass by Reference 
{
    int c;
    c=a;
    a=b;
    b=c;
}

void Swap(float &c , float &d) //pass by Reference 
{
    float r=c;
    c=d;
    d=r;
}

int main() {
    int a,b;
    cin>>a>>b;

    Swap(a,b);
    cout<<a<<" "<<b<<" "<<endl;

    float f1 = 4.8,f2=3.6;
    Swap(f1,f2);
    cout<<f1<<" "<<f2;
}

//Note : swap is also a Inbuilt Function in c++ to swap the two Numbers.