// insertion Sort O(n^2)


#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i = 0; i < n - 1; i++){
        int si = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[si])
            si = j;
        }
        swap(arr[i],arr[si]);
    }
}

void printArr(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
int arr[] = {5,4,3,1,0,9};
int n = 6;
    insertionSort(arr,n);
    printArr(arr,n);
    return 0;
}