#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    int thirdMax(vector<int>& nums) {
        set<int> res;
        int i=0;
        while(res.size()<3&&i<nums.size()){
        res.insert(nums[i]);
        i++;
        }
        
        while(i<nums.size()){
            if(nums[i]>*res.begin()){
            res.erase(res.begin());
            res.insert(nums[i]);
                
            }
            i++;
        }
        
        return res.size() == 3 ? *res.begin() : *res.rbegin();
    }
};
