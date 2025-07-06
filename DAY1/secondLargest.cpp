// find the second largest number in array..
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,35,10,34,12};
    int firMaxi = INT_MIN;
    int secMaxi = INT_MAX;
    int size = sizeof(arr)/sizeof(arr[0]);

    if(size < 2) return 0;
    for(int i = 0; i < size;i++){
        if(arr[i] > firMaxi){
            secMaxi = firMaxi;
            firMaxi = arr[i];
        }
        else if(arr[i] < firMaxi && arr[i] > secMaxi){
            secMaxi = arr[i];
        }
    }
    cout << "Sec Maximum number is: " << secMaxi << endl;

    
    return 0;
}