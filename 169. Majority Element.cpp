#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        map<int, int>::iterator  iter;
        
        for(int i=0;i<nums.size();++i){
            ++m[nums[i]];
        }
        for(iter = m.begin(); iter != m.end(); iter++){
            if(iter->second > nums.size()/2){
                return iter->first;
            }
        }
    }
};
