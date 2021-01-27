
/*...Move all the negative elements to one side of the array ......*/

#include<bits/stdc++.h>
using namespace std;
void Swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test ;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++ )
         cin >> arr[i];

        int idx = 0;
        for(int i=0; i<n; i++){
           if(arr[i]<0){
               if(idx!=i)
                  Swap(arr[i],arr[idx]);
              idx++;
           }
        } 

        /*
        
        //two pointer aproach

        int left = 0;
        int right = n-1;

        while(left<=right){
            if(arr[left]<0 && arr[right]<0)
              left++;

            else if(arr[left] >= 0 && arr[right] >= 0)
              right--;

            else if(arr[left]<0 && arr[right]>=0){ 
                left++;
                right--;
            } 

            else{
                Swap(arr[left], arr[right]);
                left++
                right--;
            }

        }

        */

        for(int x : arr)
          cout << x << " ";

          cout << endl;
    }
    return 0;
}
