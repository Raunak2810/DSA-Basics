//14.write a program to reverse the given Digits
#include <iostream>
using namespace std;
int reverseDigits(int n) {
    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = reverseDigits(n);
    cout << "Reversed number: " << result << endl;
    return 0;
}    

