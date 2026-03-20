//13. Write a program to find the factorial value of any number
#include <iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; ++i){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}