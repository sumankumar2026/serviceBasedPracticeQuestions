#include<iostream>
using namespace std;
bool checkPrime(int num){
    if(num <= 1) return false;

    for(int i = 2; i*i < num;i++){
        if(num % i ==0 ) return false;
    }
    return true;
}

int main(){
int number;
cout << "Enter number: ";
cin >> number;
cout << endl;

if(checkPrime(number)){
    cout << "Yes "<< number << " is prime number";
}
else{
    cout << "No " << number << " is not a prime number";
}


    return 0;
}