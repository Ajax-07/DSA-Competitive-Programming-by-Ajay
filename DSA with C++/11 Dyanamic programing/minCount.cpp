//  find minimum count of sum of square of number which makes given number n;

#include<bits/stdc++.h>
using namespace std;

int minCount(int num){
    if(num == 1)
      return 1;

    vector<int> v;
    for(int i=1; i*i<=num; i++)
       v.push_back(minCount(i*i));
    
    int MIN=INT_MAX;
    for(int i=1; i<v.size(); i++ ){
        if(MIN > v[i])
           MIN = v[i];
    }  

    return MIN;   
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

       cout << minCount(num) << " ";   // O(2^N)
      // cout << minCount2(num) << " ";    // O(N)
      // cout << minCount3(num) << endl;   // O(N)
    }

    return 0;
}