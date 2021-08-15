// #1 - [https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/]

#include<bits/stdc++.h>
using namespace std;
// string 

string reverseWord(string str){
    
  //Your code here
  if(str.size() == 0) return "";
  
  return reverseWord(str.substr(1)) + str[0];
}

// array
void reverse(int arr[], int n){
 int start = 0;
 int end = n-1;

 while(start<end){
   int temp = arr[start];
    arr[start] = arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
}

int main() {

    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout); 
    #endif

    int test;
    cin >> test;

    while(test--){
      int n;
      cin >> n;

      int arr[n];
      for(int i=0; i<n; i++)
         cin >> arr[i];
      
      reverse(arr,n);

      for(auto i : arr)
        cout << i << " ";

      cout << endl;
        
    }


    return 0;    

}