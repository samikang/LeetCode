#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
    long n = nums.size()+1;
    long i;
    for(i =0;i<n;i++){
        if(nums[i]!=i){return i; }   }
        

    return 0;
    }
};
