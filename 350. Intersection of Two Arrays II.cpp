
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        vector<int> res;
        
        int i;
        for(i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        }
        
        for(i=0;i<nums2.size();i++){
            if(m[nums2[i]]>=1){
                m[nums2[i]]--;
                res.push_back(nums2[i]);
            }
        }
        return res;
        
    }
};
