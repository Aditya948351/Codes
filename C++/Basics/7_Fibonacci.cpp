#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int prev = 0,last = 1,current = 0;

    for(int i = 0;i<n;i++) {
        current = prev + last;
        cout<<current<<" ";
        prev = last;
        last = current;
    }
    cout<<endl;
    return 0;
}
