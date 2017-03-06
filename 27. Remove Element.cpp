
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,j=0,n=0,m=0;
        
        for(i=0;i<nums.size();i++){
          if(nums[i] != val){
                swap(nums[j++], nums[i]);
          n++;}
          else m++;
        }
        if(m==nums.size()) return 0;

        return n;
    }
};
