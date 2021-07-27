// greedy - [https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#]

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++)
        v.push_back({start[i],end[i]});
        
        sort(v.begin(), v.end(), [](pair<int,int> &a, pair<int,int> &b){
            return a.second < b.second;
        });
        
        int count=1;
        int i=0, j=1;
        while(j<v.size()){
            if(v[i].second < v[j].first){
                count++;
                i=j; 
            }
            j++;
        }
        return count;
    }
};

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin); 
      freopen("output.txt", "w", stdout);
    #endif

    int n; 
    cin >> n; 

    int start[n] ;
    for(int i=0; i<n; i++){
        cin >> start[i];
    }
    int end[n];
    for(int i=0; i<n; i++){
        cin >> end[i];
    }


    Solution s;
    cout << s.maxMeetings(start,end,n) << endl;

    return 0;   
}