#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> divisor(int n){
    vector<int> temp;
    for(int i = 1; i <= n/2;i++){
        if(n % i == 0)  temp.push_back(i);
    }
    temp.push_back(n);
    return temp;
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    vector<int> result = divisor(num);
    cout << "Divisor of "<<num<< " is: ";
        for(int x : result){
            cout << x << " ";
        }
        cout << endl;
    return 0;
}