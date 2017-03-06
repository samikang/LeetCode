#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int i;
        map<int,int> m;
        vector<int> v;
        map<int,int>::iterator it;
        
        for(i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(it=m.begin();it!=m.end();++it){
            if(it->second > nums.size()/3){
                v.push_back(it->first);
            }
        }
        return v;
    }
};