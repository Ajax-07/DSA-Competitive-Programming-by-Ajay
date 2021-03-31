//   ..................      Find all prime numbers in range of 1 to n       ...............
//                                    (Sieve of Erathosthenes)

#include<bits/stdc++.h>
using namespace std;

// check prime 

bool isPrime(int n){
   int prime=0;

   for(int i=1; i*i<=n; i++){
       if(n%i == 0){
           if(i*i == n)
              prime++;
          else
              prime+=2;    
       }
   }

   return (prime==2); 
    
}

// TC : O(n√n)
int allprime1(int n){
    int count=0;
    for(int i=1; i<=n; i++){
        if(isPrime(i))
           count++;
    }

    return count;
}

// Sieve of Erathosthenes TC : nloglogn
int allprime2(int n){
    bool seive[n+1];
    seive[0] = seive[1] = false;
    
    
    for(int i=2; i<=n; i++){
        seive[i] = true;
    }
   
    for(int i=2; i*i<=n; i++){
        if(seive[i]){
           for(int j=i*i; j<=n; j+=i)
              seive[j] = false;
        }
    }
    
    int count=0;
    for(int i=2; i<=n; i++)
      if(seive[i])
        count++;


    return count;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int testCase;
    cin >> testCase;
    while(testCase--){
        int n;
        cin >> n;
       
       cout << allprime1(n) << endl;   // O(n√n)
       cout << allprime2(n) << endl;   // O(nloglogn)
    }

    return 0;    
}