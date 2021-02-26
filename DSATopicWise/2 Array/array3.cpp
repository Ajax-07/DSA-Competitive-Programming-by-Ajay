
// ............ find the majority element in array...........................
//..............majority element = frequency of ele. > size of array/2.......

#include<bits/stdc++.h>
using namespace std;

class majority{
    int n; int* arr;

    public:
       majority(int n, int* arr){
           this->n = n;
           this->arr = new  int[n];
           for(int i=0; i<n; i++)
              this->arr[i] = arr[i];
       }

      void print(){
          for(int i=0; i<n; i++)
             cout << arr[i] << " ";

          cout << endl;   
      }

      int MajorityElement(){
          int count = 1;
          int eleIndex = 0;
          for(int i=1; i<n; i++){
              if(arr[i] == arr[eleIndex])
                  count++;
               else count--;

               if(count == 0){
                 eleIndex = i;
                 count = 1;
               }   
          }
         
             count = 0;
          for(int i=0; i<n; i++)
             if(arr[i] == arr[eleIndex])
                count++;
        

          if(count > n/2)
            return arr[eleIndex];
          else return 0;  
      }
};

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n; cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++)
      cin >> arr[i];
    
    majority m(n,arr);

    m.print();
   cout <<  m.MajorityElement();


    return 0;        
}
