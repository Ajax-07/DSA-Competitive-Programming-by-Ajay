#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        for(int i=0; i<(1<<n); i++){
            
           vector<int> temp;
           for(int j=0; j<n; j++){
               if(i&(1<<j) != 0){
                   temp.push_back(nums[j]);
               }
           }
           ans.push_back(temp);
        }
        
        return ans;
    }
};

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin); 
      freopen("output.txt", "w", stdout);
    #endif

    Solution s;

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<vector<int>> ans = s.subsets(arr);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++)
           cout << ans[i][j] << " " ;
        cout << endl;   
    }

    // for(auto x : s.subsets(arr)){
    //     for(int y : x)
    //         cout << y << " ";
    //     cout << endl;    
    // }
}