//11. Write a program to find sum of all odd numbers between 1 to n
#include<iostream>  
using namespace std;
int sumOfOddNumbers(int limit) {
    int sum = 0;
    for (int i = 1; i <= limit; i += 2) {
        sum += i;
    }
    return sum;         
}
int main() {
    int n;
    cout << "kitna tak print karana hai: " << endl;
    cin >> n;
    int result = sumOfOddNumbers(n);    
    cout << "sare odd no ka sum :- " << result << endl;
    return 0;
}