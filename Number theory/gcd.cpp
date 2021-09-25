#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    // code here
	    if(A==0)
	    return B;
	    if(B==0)
	    return A;
	    
	    if(A>B)
	      return gcd(B, A%B);
	    else return gcd(A, B%A);  
	      
	} 
};