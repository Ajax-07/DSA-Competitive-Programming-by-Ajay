
//  find maximum number of possible Balanced Binary Tree (BBT) with given height

#include<bits/stdc++.h>
using namespace std;

// dynamic programing O(N)

int possibleBBT3(int h){
    int ans[h+1];
    ans[0] = ans[1] = 1;

    for(int i=2; i<=h; i++){
        int x = ans[i-1];
        int y = ans[i-2];

        int res = (x*x + 2*x*y) ;
        ans[i] = res;
    }

    return ans[h];
}


// memoization : O(N)
int possibleBBT2(int h, int* ans){
    if(h<=1)
       return 1;

    if(ans[h] != -1){
        cout << "run ";
        return ans[h];
    }

    int x = possibleBBT2(h-1,ans);      
    int y = possibleBBT2(h-2,ans);

    ans[h] = (x*x + 2*x*y);      
    return (x*x + 2*x*y);
}

int possibleBBT2(int h){
    int* ans = new int[h+1];
    for(int i=0; i<=h ; i++)
        ans[i] = -1;

   return possibleBBT2(h,ans);    
}

// recursion - brute force  - O(2^n)
int possibleBBT(int height){
    if(height <= 1){
        return 1;
    }

     int mod = (int)(pow(10,9))+7; 
     int x = possibleBBT(height-1);
     int y = possibleBBT(height-2);
     

    int temp1 = (int)(( (long)(x)*x  )%mod);
    int temp2 = (int)((2 * (long)(x) * y )%mod);

     return (temp1+temp2)%mod;
}


int main(){
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif 


    int test_cases;
    cin >> test_cases;

    while(test_cases--){
        int height; 
        cin >> height;

       cout << possibleBBT(height) << " ";   // O(2^N)
       cout << possibleBBT(height) << " ";   // O(N)
       cout << possibleBBT3(height) << endl;   // O(N)
      
    }

    return 0;
}