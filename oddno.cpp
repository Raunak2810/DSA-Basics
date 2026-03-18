//8. Write a program to print all odd numbers between 1 to 100
#include<iostream>
using namespace std;
void printOddNumbers(int limit){
    for(int i=1;i<=limit;i+=2){
        cout<<i<<endl;
    }
}
int main(){
    int limit;
    cout<<"kitna tk odd no. print krna hai : "<<endl;
    cin>>limit;
    printOddNumbers(limit);
}