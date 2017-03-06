#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
   
        int pos = 0; //last non zero element in nums after one pass
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
                swap(nums[pos++], nums[i]);
        }
        
    }
};
