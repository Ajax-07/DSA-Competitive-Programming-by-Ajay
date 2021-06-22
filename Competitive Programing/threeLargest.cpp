#include<bits/stdc++.h>
using namespace std;

class triplet{
   public:
    int first;
    int second;
    int third;

    triplet(){
        first = second = third = INT_MIN;
    }
};

triplet threeLargests(int* arr, int n){
    triplet res;

    for(int i=0; i<n; i++){
       if(res.first < arr[i]){
           res.third = res.second;
           res.second = res.first; 
           res.first = arr[i];
       }else if(res.second < arr[i]){
           res.third = res.second;
           res.second = arr[i];
       }else if(res.third < arr[i]){
           res.third = arr[i];
       }
    }

    return res;
}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

   triplet res =  threeLargests(arr,n);  

   cout << res.first << " " << res.second << " " << res.third << endl;   

    return 0;
}