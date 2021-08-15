 // #22 - [https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1]

 #include<bits/stdc++.h>
 using namespace std;
 
 bool subArrayExists(int arr[], int n)
    {
        //Your code here
        set<int> s;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(s.find(sum) != s.end() || sum == 0 || arr[i]==0) 
                return true;
            else s.insert(sum);
        }
        
        return false;
    }


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
     
    int n ; cin >> n;

    int* arr = new int[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

     cout << subArrayExists(arr, n);
    return 0;    
} 