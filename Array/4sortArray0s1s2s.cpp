
/*...Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo.....
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout); 
    #endif


    int test;  cin >> test;

    while(test--){
        int n;   cin >> n;

        int arr[n];
        int count_0 = 0, count_1 = 0, count_2 = 0;

        for(int i=0; i<n; i++){
            int x; 
            cin >> x ;
            arr[i] = x;
            if(x == 0)
             count_0++;
            else if(x == 1)
              count_1++;
            else  count_2++;  
        }
       
       count_0 -= 1; count_1 += count_0; count_2 += count_1;

       int sortedArr[n]{0};

           for(int i=0; i<n; i++){

           if(arr[i] == 0)
             { sortedArr[count_0] = arr[i]; --count_0;}
           else if(arr[i] == 1)
             { sortedArr[count_1] = arr[i]; --count_1;}
            else
              {sortedArr[count_2] = arr[i]; --count_2;}
        }

     for(auto i : sortedArr)
        cout << i << " " ;

      cout << endl;  

    }

    return 0;
}
