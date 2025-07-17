#include<iostream>
using namespace std;

int hcf(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main(){

    int number1,number2;
    cout << "Enter a number1: ";
    cin >> number1;

    cout << "Enter a number2: ";
    cin >> number2;
    cout << "GCD of "<< number1 << " and " << number2 << " is: " << hcf(number1,number2) << endl;


    return 0;
}