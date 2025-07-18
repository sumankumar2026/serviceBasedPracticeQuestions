#include<bits/stdc++.h>
using namespace std;
  // [4 5 6 1 2]
bool checkSorted(vector<int>&num){
    int size = num.size();
    int bp = 0;

    for(int i = 0; i < size - 1; i++){
        if(num[i] > num[i + 1])  bp++;
    }
    if(num[size - 1] > num[0])  bp++;
    return(bp <= 1);    //1 2 3   //no breaking point  but yes  3 > 1  here is bp is 0 so array is sorted
}

int main(){

    vector<int> arrays = {4,5,6,1,2};
    if(checkSorted(arrays)){
        cout << "Array is sorted and Rotated";
    }
    else{
        cout << "Array is not sorted and Rotated";
    }

    return 0;
}