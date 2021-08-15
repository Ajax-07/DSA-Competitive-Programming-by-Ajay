#include<bits/stdc++.h>
using namespace std;


class Solution{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
          
    vector<int> arr;
    int minr=0;
    int minc=0;
    int maxr=r-1;
    int maxc=c-1;
    
    
    while(minr<=maxr && minc<=maxc){
        // Top Wall
        for(int j=minc; j<=maxc; j++)
            arr.push_back(matrix[minr][j]);
        minr++;
        
        // right wall 
        for(int i=minr; i<=maxr; i++)
             arr.push_back(matrix[i][maxc]);
        
        maxc--;
        
        // Bottom Wall
        if(minr <= maxr){
            for(int j=maxc; j>=minc; j--)
               arr.push_back(matrix[maxr][j]);
            maxr--;
        }
        
        // left wall
        if(minc <= maxc){
            for(int i=maxr; i>=minr; i--)
               arr.push_back(matrix[i][minc]);
            minc++;
        }
        
    }
    
    return arr;
    
    }
};