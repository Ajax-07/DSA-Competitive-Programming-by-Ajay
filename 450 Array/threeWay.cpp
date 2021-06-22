// #29 - [https://practice.geeksforgeeks.org/problems/three-way-partitioning/1#]
#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
    int low=0;
    int heigh=array.size()-1;
    
    int i=0;
    while(i<=heigh && low<heigh){
        if(array[i]<a){
            swap(array[i],array[low]);
            low++; i++;
        }else if(array[i]>b){
            swap(array[i], array[heigh]);
            heigh--;
        }
        else i++;
    }
    }
};