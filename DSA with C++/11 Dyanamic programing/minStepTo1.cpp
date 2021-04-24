//  find minimum path to reduce given number to 1 

#include<bits/stdc++.h>
using namespace std;

// dynamic programing O(N)
int minPath3(int num){
    int ans[num+1];

    ans[0] = 0;
    ans[1] = 0;

    for(int i=2; i<=num; i++){
        int x = ans[i-1];
        int y = INT_MAX;
        int z = INT_MAX;

        if(i%2 == 0)
           y = ans[i/2];

         if(i%3 == 0)  
           y = ans[i/3];

        ans[i] = 1+min(x,min(y,z));   
    }

    return ans[num];
}

// memoisation O(N)
int minPath2(int num, int* ans){
    if(num <= 1){
        return 0;
    }

    if(ans[num] != -1)
     return ans[num];

    int a = minPath2(num-1,ans);
    
    int b = INT_MAX;
    int c = INT_MAX;
    if(num%2 == 0)
      b = minPath2(num/2,ans);
    if(num%3 == 0)
       c = minPath2(num/3,ans);

    ans[num]  = 1+min(a,min(b,c)); 
    
    return ans[num];
    
}

int minPath2(int num){
    int* ans = new int[num+1];

    for(int i=0; i<=num; i++)
         ans[i] = -1;

   return minPath2(num, ans);     
   
}

// recursive brute force O(2^N)
int minPath(int num){
    if(num<=1)
       return 0;

    int a;

    a = minPath(num-1);
    
    int b = INT_MAX;
    int c = INT_MAX;
    if(num%2 == 0)
      b = minPath(num/2);
    if(num%3 == 0)
       c = minPath(num/3);

    return 1+min(a,min(b,c));      
}

int main(){
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif 


    int test_cases;
    cin >> test_cases;

    while(test_cases--){
        int num; 
        cin >> num;

       cout << minPath(num) << " ";   // O(2^N)
       cout << minPath2(num) << " ";    // O(N)
       cout << minPath3(num) << endl;   // O(N)
    }

    return 0;
}