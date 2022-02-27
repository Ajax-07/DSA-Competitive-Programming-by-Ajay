// link - [  ]

#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> split(string str){
        vector<int> res;
        int i=0; 
        string temp="";
        while(i<str.size()){
            if(str[i] == '.'){
                res.push_back(stoi(temp));
                temp = "";
            }
            else
               temp+=str[i];
            i++;
        }
        
        res.push_back(stoi(temp));
        return res;
    }
public:
    int compareVersion(string version1, string version2) {
       
        vector<int> v1 = split(version1);
        vector<int> v2 = split(version2);
        int i;
        for(i=0; i<v1.size() && i<v2.size(); i++){
            if(v1[i]>v2[i])
                return 1;
            if(v1[i]<v2[i])
                return -1;
        }
        
        while(i<v1.size()){
            if(v1[i] == 0){
                i++;
                continue; 
            }
            return 1;
        }
        while(i<v2.size() ){
             if(v2[i] == 0){
                i++;
                continue ;
            }
            return -1;
        }
        return 0;
       
    }
};