
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


#define min(a,b) (a)>(b)?(b):(a)
class Solution {
public:
    string getHint(string secret, string guess) {
        int i;
        int a=0,b=0;
        map<int,int> ms;
        map<int,int> mg;
        map<int,int>::iterator it;

        
        for(i=0;i<secret.size();i++){

            if(secret[i]==guess[i])a++;
            else{
            ms[secret[i]]++;
            mg[guess[i]]++;                
            }
        }
        
        for(it=ms.begin();it!=ms.end();++it){
            if(mg.find(it->first)!=mg.end()){
                b += min(it->second , mg[it->first]);
            }
            
        }
        
        return to_string(a) + 'A'+ to_string(b)+'B';
        
    }
};
