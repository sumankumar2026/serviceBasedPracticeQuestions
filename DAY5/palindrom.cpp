#include<iostream>
using namespace std;

bool palindrome(int num){
    int reversed = 0;
    int original = num;
    while(num != 0){
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num/10;
    }
    if(reversed == original) return true;
    else{
        return false;
    }
}


int main(){
    int x = 121;
    // cout <<""<< palindrome(x) << endl;
    if(palindrome(x)){
        cout << "yes " << x << " is a palindrome" << endl;
    }
    else{
        cout << "No " << x << " is not palindrome" << endl;
    }

    return 0;
}