 //2. Write a program to print all natural numbers in reverse
 #include<iostream>
using namespace std;
void printRange(int start, int end){
    for(int i = end; i >= start; --i){
        cout << i << endl;
    }
}
int main(){
    int start, end;
    cout << "Jaha se suru krna wo no. do : " << endl;
    cin >> start;
    cout << "Jaha tk chalana wo no. do : " << endl;
    cin >> end;
    printRange(start, end);
    return 0;
}