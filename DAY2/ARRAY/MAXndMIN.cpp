// #include<iostream>
#include <bits/stdc++.h>
using namespace std;

int minElement(int arr[], int n){
    int res = arr[0];
    for(int i = 0; i < n;i++){
        res = min(res, arr[i]);
    }
    return res;
}

int maxElement(int arr[],int n){
    int res = arr[0];
    for(int i = 0; i < n;i++){
        res = max(res,arr[i]);
    }
    return res;
}

int main(){
int arr[] = {1,2,5,1,62,5555,4,2,25};
int n = sizeof(arr)/ sizeof(arr[0]);
cout << "Maximum Element of arr is: " << maxElement(arr,n);
cout << endl;
cout << "Minimum Element of arr is: " << minElement(arr,n);

    return 0;
}