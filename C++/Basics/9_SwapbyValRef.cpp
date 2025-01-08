#include <iostream>
using namespace std;

// Function to swap two integers using pass-by-value
// Pass-by-value creates a copy of the variables, so changes do not affect the original variables.
void swapByValue(int a, int b) {
    int temp = a; 
    a = b;
    b = temp;    

}

// Function to swap two integers using pass-by-reference
// Pass-by-reference works on the actual variables, so changes are reflected in the original variables.
void swapByReference(int &a, int &b) {
    int temp = a; 
    a = b;      
    b = temp;    
    // The original variables are modified because we are working with their memory addresses.
}

// Function to swap two floats using pass-by-reference
void swapFloatByReference(float &x, float &y) {
    float temp = x; 
    x = y;          
    y = temp;     
}

int main() {
    // Example for integers
    int num1 = 10, num2 = 20;
    cout << "Before swapping (integers): num1 = " << num1 << ", num2 = " << num2 << endl;

    // Using pass-by-value (no effect on original values)
    swapByValue(num1, num2);
    cout << "After swapping using pass-by-value: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Using pass-by-reference (modifies original values)
    swapByReference(num1, num2);
    cout << "After swapping using pass-by-reference: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Example for floats
    float f1 = 1.5, f2 = 2.8;
    cout << "\nBefore swapping (floats): f1 = " << f1 << ", f2 = " << f2 << endl;

    // Using pass-by-reference for floats
    swapFloatByReference(f1, f2);
    cout << "After swapping using pass-by-reference: f1 = " << f1 << ", f2 = " << f2 << endl;

    return 0;
}
