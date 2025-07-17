#include<iostream>
using namespace std;
int countDigit(int x){
    int count = 0;
    int digit = x;
    while(digit != 0){
        digit = digit/10;
        count++;
    }
    return count;
}

int main(){
    int x = 156;
    cout << "Number of Digits: " << countDigit(x)<< endl;
    return 0;
}