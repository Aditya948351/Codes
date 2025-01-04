#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number:\t";
    cin>>num;

    for(int i=0;i<11;i+=1) {
        cout<< num <<" * "<< i << " = "<<num*i<<endl;
    }
}
