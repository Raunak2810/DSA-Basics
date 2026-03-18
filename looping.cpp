//1. Write a program to print all natural numbers from 1 to n
#include<iostream>
using namespace std;
void printRange(int start, int end){
    for(int i = start; i <= end; ++i){
        cout << i << endl;
    }
}
int main(){
    int start, end;
    cout << "Jaha se suru krna hai wo no. do : " << endl;
    cin >> start;
    cout << "Jaha khatam krna hai wo no. do : " << endl;
    cin >> end;
    printRange(start, end);
    return 0;
}