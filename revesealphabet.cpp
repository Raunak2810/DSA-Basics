//6. Write a program to print reverse alphabets from Z to A
#include<iostream>
using namespace std;
void printalphabets(){
    for(char c='Z' ;c>='A';c--){
        cout<<c<<endl;
    }
}
int main(){
    printalphabets();
    return 0;   
} 