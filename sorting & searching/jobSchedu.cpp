// #24 - [https://www.geeksforgeeks.org/weighted-job-scheduling-log-n-time/]

#include<bits/stdc++.h>
using namespace std;

struct tpl{
    int a,b,c;
};


int binarySearch(tpl* jobs, int i){
    int lo = 0, hi = i - 1;
  
    // Perform binary Search iteratively
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (jobs[mid].b <= jobs[i].a)
        {
            if (jobs[mid + 1].b <= jobs[i].a)
                lo = mid + 1;
            else
                return mid;
        }
        else
            hi = mid - 1;
    }
  
    return -1;
}

// recursive dp
int maxProfit(tpl* arr, int n){
    
    int *table = new int[n];
    table[0] = arr[0].c;
  
    // Fill entries in table[] using recursive property
    for (int i=1; i<n; i++)
    {
        // Find profit including the current job
        int inclProf = arr[i].c;
        int l = binarySearch(arr, i);
        if (l != -1)
            inclProf += table[l];
  
        // Store maximum of including and excluding
        table[i] = max(inclProf, table[i-1]);
    }

    return table[n-1];

}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
     
    int n ; cin >> n;

    tpl arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i].a >> arr[i].b >> arr[i].c ;
    }

    sort(arr, arr+n, [](const tpl &x, const tpl &y){return x.b<y.b;});

    for(auto u : arr) {
        cout << u.a << " " << u.b << " " << u.c << endl;  
    }

    cout << maxProfit(arr, n) << endl;

    return 0;
}