#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0;
        int len=nums.size();
        bool flag1=false;
        bool flag2=false;
        
        if(len==0)return NULL;
        if(len==1)return 0;
        if(len==2){
            if(nums[0]<nums[1]){
                return 1;
            }else
            {
                return 0;
            }
            
        }
        
        while(i+2<len){
            if (nums[i+1]>nums[i] && nums[i+1]>nums[i+2])
            {
                return i+1;
                
            }else if(nums[i+1]<=nums[i]){
                i ++;
                flag1=true;
                
            }else if(nums[i+1]>nums[i] && nums[i+1]<=nums[i+2]){
                i+=1;
                flag2=true;            }
            
        }
        
        if(flag1) return 0;
        if(flag2) return len-1;       
        
    }
};
