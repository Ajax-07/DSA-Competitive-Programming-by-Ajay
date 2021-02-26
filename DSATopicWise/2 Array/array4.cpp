// ...........  find maximum subarray sum : [KADEN'S ALGO] : TC-O(N) ......... 

#include <bits/stdc++.h>
using namespace std;

// in oops style.................
class kaden{
  int n;
  int* arr;
   
   public:

   kaden(int n, const int* arr){
       this->n = n;
       this->arr = new int[n];
       for(int i=0; i<n; i++)
          this->arr[i] = arr[i];
   }

   int kadenAlgo(){
      int maxSum = 0;
      int subArrSum = 0;
      for(int i=0; i<n; i++){
        subArrSum += arr[i];
        if(subArrSum<0){
           subArrSum = 0;
        }
        else maxSum = max(subArrSum,maxSum);
        

         
      }
      return maxSum;
   }

   void print(){
       for(int i=0; i<n; i++)
          cout << arr[i] << " ";

          cout << endl;
   }
};

    


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  

    int n; cin >> n; 

    int arr[n];
    for(int i=0; i<n; i++)
       cin >> arr[i];

    kaden k(n,arr);

    k.print();
    cout << k.kadenAlgo();
    
    return 0;
}
