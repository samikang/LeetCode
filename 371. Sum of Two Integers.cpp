#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        int i;
        if(b>=0){
        for(i=0;i<b;i++){
            ++a;    
            }}
        else{
        for(i=b;i<0;i++){
            a--;    
            }            
            
        }
            
            return a;
    }
};
