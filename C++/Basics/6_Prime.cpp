#include<iostream>
using namespace std;

int main() {
    int n,i;
    cout<<"Enter the numbers: ";
    cin>>n;

    if(n<2) {
        cout<<"Number is not prime";
    }
    else {
        for(i=2;i<n;i=i+1) {
            if(n % i==0) {
                cout<<"Number is not prime";
                return 0;
            }
        }
        cout<<"It is a Prime Number";
        return 0;
    }
}
