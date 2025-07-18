#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int singleNum(vector<int> & nums){
    int ans = 0;
    for(int i = 0; i< nums.size(); i++){
        ans = ans ^ nums[i];
    }
    return ans;
}


int main(){

    vector<int> temp = {4,1,2,1,2};
    cout <<"Unique number is: "<< singleNum(temp);


    return 0;
}