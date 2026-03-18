//10. Write a program to find sum of all even numbers between 1 to n
#include<iostream>  
using namespace std;
int sumOfevenNumbers(int limit) {
    int sum = 0;
    for (int i = 2; i <= limit; i += 2) {
        sum += i;
    }
    return sum;         
}
int main() {
    int n;
    cout << "kitna tak print karana hai: " << endl;
    cin >> n;
    int result = sumOfevenNumbers(n);    
    cout << "sare even no ka sum :- " << result << endl;
    return 0;
}