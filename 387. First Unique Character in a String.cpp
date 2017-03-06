
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int> m;
        int i;
        
        unordered_map<int,int>::iterator iter;
        
        if(s.length()==1)return 0;
        
        for(i=0;i<s.size();i++){
            m[s[i]]++;
        }
        i=0;
        for(iter=m.begin();iter!=m.end();iter++)
        {
            
            if(iter->second ==1)return i;
          i++;
        }
        return -1;
    }
};
