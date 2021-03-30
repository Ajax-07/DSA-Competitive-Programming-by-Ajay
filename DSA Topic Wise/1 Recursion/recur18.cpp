
// ................. print 123 as "one two three" ......

#include<bits/stdc++.h>
using namespace std;

char word[][10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

void print(int n){
    if(n==0)
     return ;

    print(n/10);
    cout << word[n%10] << " ";  
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
   
    int n; cin >> n;
    
    print(n);

    return 0;   
}