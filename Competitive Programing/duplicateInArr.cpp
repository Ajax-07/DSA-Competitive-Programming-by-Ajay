// find duplicate element from n size array which contain 0 to n-2 natural no. 

#include<bits/stdc++.h>
using namespace std;

/*
method :
1. check concurrency for every element in array    O(N^2)
2. sort array and find duplicate
3. total_sum_of_array - (sum od n-2 natural number)
*/

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

   int n; cin >> n;
   int totalSum=0;
   for(int i=0; i<n; i++){
       int temp;
       cin >> temp;
       totalSum += temp;
   }
   
    
   int localSum = (n-2)*(n-1)/2;
  
   cout << totalSum - localSum; // O(N)

   
    return 0;
}