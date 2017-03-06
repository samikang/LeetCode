
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res=nums;
        
        
        int i,j, len=nums.size();
        if(k>len){
            k=k%len;
        }
        for(i=len-k,j=0;i<len;i++,j++){
            nums[j]=res[i];
        }
         for(i=0;i<len-k;i++){
            nums[j]=res[i];
            j++;
        }
    }
};
