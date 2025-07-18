#include<bits/stdc++.h>
using namespace std;

vector<int> removeDupli(vector<int>&nums){
    vector<int> temp;
    if(nums.empty()) return{};
    temp.push_back(nums[0]);
    for(int j = 1; j < nums.size(); j++){
        if(nums[j] != nums[j - 1]){
            temp.push_back(nums[j]);
        } 
    }
    return temp;
}

int main(){
     vector<int> x = {0,0,1,1,1,2,2,3,3,4};
     vector<int> result = removeDupli(x);
     int count = 0;
     for(int i = 0 ; i < result.size(); i++){
        count++;
        cout <<  result[i] << " ";
     }
     cout << endl;
     cout <<"Total number of unique digit: " <<  count << endl;

    return 0;
}