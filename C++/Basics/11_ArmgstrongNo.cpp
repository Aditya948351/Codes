#include <iostream>
using namespace std;


//sum of cubes of the digits of the number is the number itself.
int main() {
    int num, original, sum = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;

    // Count digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)
            power *= digit;
        sum += power;
        temp /= 10;
    }

    if (sum == original)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
