//7. Write a program to print all even numbers between 1 to 100
#include<iostream>
using namespace std;
void printEvenNumbers(int limit){
    for(int i=2;i<=limit;i+=2){
        cout<<i<<endl;
    }
}
int main(){
    int limit;
    cout<<"kitna tk even no. print krna hai : "<<endl;
    cin>>limit;
    printEvenNumbers(limit);
    return 0;
}
