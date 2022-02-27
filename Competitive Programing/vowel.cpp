
#include <iostream>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int n;
   cin >> n;
   
   char x;
   
   int count=0;
   
   for(int i=0; i<n; i++){
       cin >> x;
       
       if(x=='a' || x=='A' || x=='e' || x=='E' || x=='i' || x=='I' || x=='o' || x=='O' || x=='u' || x=='U')
        continue;
       else
        count++;
   }
   
   cout << count;
    

    return 0;
}