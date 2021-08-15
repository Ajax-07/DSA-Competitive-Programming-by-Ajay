
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextSmallerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> res;
        stack<long long> s;
        
        for(int i=arr.size()-1; i>=0; i--){
            long long temp = -1;
            while(!s.empty()){
                if(s.top() < arr[i]){
                    temp = s.top();
                    break;
                }
                s.pop();
            }
            
            res.push_back(temp);
            
            s.push(arr[i]);
            
        }
        reverse(res.begin(), res.end());
        return res;
    }
};


int main(){
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin); 
    //   freopen("output.txt", "w", stdout);
    // #endif

   vector<long long> arr{11 , 13, 21, 3,4, 10, 1, 8, 5, 2, 7};

    Solution s;
   vector<long long> ans = s.nextSmallerElement(arr, arr.size());
    for(auto x : ans)
       cout << x << " ";
// 3 3 3 1 1 1 -1 5 2 -1 -1 
    return 0;   
}