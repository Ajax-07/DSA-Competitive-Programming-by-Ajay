// #20 - [https://practice.geeksforgeeks.org/problems/common-elements1132/1]

#include<bits/stdc++.h>
using namespace std;

 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> res;
            int i=0, j=0, k=0;
            while(i<n1 && j<n2 && k<n3){
                if(A[i] == B[j] && B[j] == C[k]){
                    if(res.size() == 0)
                      res.push_back(A[i]);
                    if(res.size()>0 && res.back() != A[i])
                        res.push_back(A[i]);
                    i++; j++; k++;
                }
                
                else{
                    if(A[i] < B[j]) i++;
                    if(B[j] < C[k]) j++;
                    if(C[k] < A[i]) k++;
                }
            }
            
            return res;
}