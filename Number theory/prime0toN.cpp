#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int N;
    cin >> N;

    bool arr[N+1];
    memset(arr, 1, sizeof(arr));
    
    arr[0]=arr[1] = false;   
    
    for(int i=2; i*i<=N; i++){
        if(arr[i]){
            for(int j=i*i; j<=N; j+=i)
                arr[j] = false;
        }
    }


    for(int i=2; i<=N; i++)
      if(arr[i])
        cout << i << " ";

}