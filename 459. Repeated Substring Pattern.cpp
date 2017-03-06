#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        int i,k;
        if (str.size()==1){
            
            return false;
        }
        else if(str.size()==2){
            if(str[0]==str[1]){
                return true;
            }
            else{
                return false;
            }
        }else{
            for(i=0;i<str.size();i++)
            {
                if(str[0]!=str[i])
                {
                    break;
                }
                if(i==str.size()-1) return true;
            }
            
        }
        
        for(i=2;i<str.size();i++){
            if(str.size()%i==0){
                if(compare(str, i,str.size()/i))
                {
                    return true;
                }
                
            }
            
        }
        return false;
        
    }
    
    bool compare(string str, int g,int offset){
        int i,j;
        for(j=0;j<offset;j++){
        for(i=0;i<g;i++){
            if(str[j]!=str[j+i*offset])
                {return false;}
        }
        }
        return true;
        
    }
    

};
