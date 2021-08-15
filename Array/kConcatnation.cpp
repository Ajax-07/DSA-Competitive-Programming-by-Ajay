#include <iostream>
using namespace std;

int main() {
     #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout); 
    #endif
    
    int test;
    cin >>  test;
    
    while(test--){
        int n, k; cin >>  n >> k; 
        int arr[n];
        for(int i=0; i<n; i++)
           cin >> arr[i];
        
        int sum=0;
        int curSum=0;
        for(int i=0; i<(n*k); i++){
            curSum += arr[i%n];
          
            sum = max(sum, curSum);
            if(curSum<0)
              curSum=0;
        }
        
       cout << sum << endl;
    }
	// your code goes here
	return 0;
}
