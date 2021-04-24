// find nth fibonacci number

#include<bits/stdc++.h>
using namespace std;
// this called dynamic programing (bottom-up approach ) O(N)
int nthFibonacci(int num){
    int ans[num+1];

    ans[0] = 0;
    ans[1] = 1;

    for(int i=2; i<=num; i++)
       ans[i] = ans[i-1]+ans[i-2]; 

    return ans[num];   
}

// this called memoisation (top-down approach) O(N)
void nthFib(int num, int arr[]){
    if(num <= 1){
        arr[num] = num;
        return;
    }
    

    if(arr[num-1] == -1)
        nthFib(num-1,arr);
    if(arr[num-2] == -1 )
         nthFib(num-2, arr);
        
    arr[num] = arr[num-1] + arr[num-2];         

}

int nthFib(int num){
    int* fibArr = new int[num+1];

    for(int i=0; i<=num; i++){
        fibArr[i] = -1;
    }

    nthFib(num,fibArr);

   

    return fibArr[num];

}

// recursive brute force O(2^N)

int nthFibRec(int num){
    if(num<=1)
        return num;

    return nthFibRec(num-1) + nthFibRec(num-2);    
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

        cout << nthFib(num) << " ";    // O(n)

        cout << nthFibRec(num) << " ";   // O(2^n)

        cout << nthFibonacci(num) << endl;  // O(n)
    }

    return 0;
}