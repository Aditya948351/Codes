#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        cout << "Number is not Prime" << endl;
        return false;
    }
    if (n == 2) {
        cout << "Number is Prime" << endl;
        return true;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "Number is not Prime" << endl;
            return false;
        }
    }
    cout << "Number is Prime" << endl;
    return true;
}

int Factorial(int n) {
    int ans = 1;
    for(int i=1;i<=n;i++) {
        ans = ans*i;
    }
    cout<<"Factorial of Number is:"<<ans<<endl;
    return ans;
}

int main() {
    int n,a,b,ans;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    isPrime(a);
    isPrime(b);
    Factorial(b);
    Factorial(a+b);
}    