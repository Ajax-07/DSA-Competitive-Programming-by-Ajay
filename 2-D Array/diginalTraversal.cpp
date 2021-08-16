#include<bits/stdc++.h>
using namespace std;

class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> arr;
		
		int diagonal=0;
		
		while(diagonal<n){
		    for(int i=0,j=diagonal; i<n && j>=0; i++, j--){
		        arr.push_back(A[i][j]);
		    }
		    
		    diagonal++;
		}
		diagonal--;
		int row = 1;
		while(row < n){
		    for(int i=row, j=diagonal; i<n && j>=row; i++,j--){
		        arr.push_back(A[i][j]);
		    }
		    row++;
		}
		
	    return arr;	    
		
	}
};