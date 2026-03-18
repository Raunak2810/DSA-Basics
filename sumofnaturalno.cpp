//9. Write a program to find sum of all natural numbers between 1 to n
#include<iostream>  
using namespace std;
int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;         
}
int main() {
    int n;
    cout << "kitna tak print karana hai: " << endl;
    cin >> n;
    int result = sumOfNaturalNumbers(n);    
    cout << "sare natural no ka sum :- " << result << endl;
    return 0;
}