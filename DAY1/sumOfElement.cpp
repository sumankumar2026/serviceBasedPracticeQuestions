#include<iostream>

using namespace std;
int main(){
    int arr[] = {1,2,56,3,21,5,2,15,32};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for(int i = 0 ; i < size; i++ ){
        sum += arr[i];
    }
    cout << "Sum of Element in An Array is: " << sum;
    return 0;
}