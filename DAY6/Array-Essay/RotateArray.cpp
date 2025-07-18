#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArr(vector<int> nums,int k){
    vector<int> temp(nums.size());
    for(int i = 0 ; i< nums.size(); i++){
        temp[(i + k)% nums.size()] = nums[i]; 
    }
    return temp;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int position = 3;
    vector<int> result = rotateArr(arr,position);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}