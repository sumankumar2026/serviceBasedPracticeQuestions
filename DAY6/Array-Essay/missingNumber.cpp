#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int missingNum = 0;
        int sumNum = 0;
        int size = nums.size();
        int totalSumNum = size * (size + 1)/2;
        for(int i = 0; i < size; i++){
            sumNum = sumNum + nums[i];
        }
        missingNum = totalSumNum - sumNum;
        return missingNum;
    };
    

int main(){

vector<int> nums = {9,6,4,2,3,5,7,0,1

};
cout << missingNumber(nums);

    return 0;
}