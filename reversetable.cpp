//4.Write a program to print reverse tables
#include<iostream>
using namespace std;
void printtable(int num){
    for(int i = 10; i >= 1; --i){
        cout << num << " x " << i  << " = " << num * i << endl;
    }
}
int main(){
    int num;
    cout << "jis no. ka table chahiye wo no. do : ";
    cin >> num;
    printtable(num);
    return 0;
}