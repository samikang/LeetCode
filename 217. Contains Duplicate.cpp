#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        int i;
        for(i=0;i<nums.size();i++){
         m[nums[i]]++;
        }
        
        for(std::map<int,int>::iterator iter = m.begin(); iter != m.end(); ++iter)
        {
            if(iter->second>1)return true;
        }
        return false;
        
    }
};
