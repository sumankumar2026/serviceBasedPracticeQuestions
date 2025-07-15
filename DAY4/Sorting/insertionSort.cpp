#include<iostream>
using namespace std;

void insertSort(int arr[],int n){
    for(int i = 0; i < n;i++){
        int curr = arr[i];
        int prev = i-1;

    while (prev >= 0 && arr[prev] > curr)
    {
        /* code */
        arr[prev+1] = arr[prev];
        prev--;
    }
    arr[prev + 1] = curr;
    }
} 

void printArr(int arr[],int n)
    {
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

}

int main(){

    int arr[]= {8,4,6,1,0,3};
    int n = 6;
    insertSort(arr,n);
    printArr(arr,n);

    return 0;
}