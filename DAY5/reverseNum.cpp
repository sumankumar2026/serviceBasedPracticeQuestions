#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverseNum(int num){
    int reversed = 0;
    while(num != 0){
        int remainder = num % 10;
        if(num > INT_MAX/10 && num < INT_MIN/10) return 0;
        reversed = reversed *10 + remainder;
        num = num / 10;
    }
    return reversed;
}

int main(){
    int x = 12;
    cout << "Reversed Number: " << reverseNum(x) << endl;
    return 0;
}