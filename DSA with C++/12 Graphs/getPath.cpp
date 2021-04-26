// find the path between two given vertices

#include<bits/stdc++.h>
using namespace std;

// vector<int> getPath(int** edges, int n, int sv, int ev, bool* visited){
//     if(sv == ev){
//         vector<int> v;
//         v.push_back(ev);
//         return v;
//     }
    
//     vector<int> res;
//     for(int i=0; i<n; i++){
//         if(i == sv)
//             continue;
//         if(edges[sv][i] && !visited[i])
//                 res.
//     }
// }

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int vertices; cin >> vertices;
    int e; cin >> e;
    int** edges = new int*[vertices];

    for(int i=0; i<vertices; i++){
        edges[i] = new int[vertices];
        for(int j=0; j<vertices; j++)
          edges[i][j] = 0;
    }
     
    for(int i=0; i<e; i++){
        int s, e;
        cin >> s >> e;
        edges[s][e] = 1;
        edges[e][s] = 1;
    } 
    
    int sv, ev;
    cin >> sv >> ev;
    
    bool* visited = new bool[vertices]; 
    for(int i=0; i<vertices; i++)
       visited[i] = false;

    


    for(int i=0; i<vertices; i++)
       delete [] edges[i];
    delete [] edges; 
    
    delete []  visited;
    
    return 0;

}