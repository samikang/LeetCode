#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define max(a,b) (a)>(b)?(a):(b)

class Solution {
public:
    int maxSubArray(int A[], int n) {
        int ans=A[0],i,j,sum=0;
        for(i=0;i<n;i++){
            sum+=A[i];
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        return ans;
    }
};
