//Pass by Value and Pass By Reference
//Lets see them by Looking into code of Swapping two numbers using pass by value and pass by reference
#include<iostream>
using namespace std;

/*void Swap(int a , int b) {
    int c;
    c=a;
    a=b;
    b=c;
}

//It will not swap the numbers as it is Pass By Value. For Reference for Pass by Value and Pass by Reference Follow the Readme.md for this Project.
//we need to modify the function as : */
void Swap(int &a , int &b) //pass by Reference 
{
    int c;
    c=a;
    a=b;
    b=c;
}
//Added "&" so as it is now Pass by Reference.
//Now it will Print Correctly.
int main() {
    int a,b;
    cin>>a>>b;

    Swap(a,b);
    cout<<a<<" "<<b<<" ";
}