
#include<bits/stdc++.h>
using namespace std;

void print(int** edges, int n, int sv, bool* visited){

    cout << sv << endl;

    visited[sv] = true;

    for(int i=0; i<n; i++ ){
        if(i == sv)
          continue;
        if(edges[sv][i] && !visited[i])
           print(edges,n,i,visited);  
    }

    for(int i=0; i<n; i++){
        if(!visited[i])
           print(edges,n,i,visited);
    }
}

void DFS(int** edges, int n){

    bool* visited = new bool[n]; 
    for(int i=0; i<n; i++)
       visited[i] = false;


    for(int i=0; i<n; i++){
        if(!visited[i])
        print(edges,n,i,visited);
    }

    delete [] visited;
}

/*
6
2
0 3
1 5

0
3
1
5
2
4


*/
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
    
  

    DFS(edges,vertices);


    for(int i=0; i<vertices; i++)
       delete [] edges[i];

    delete [] edges;

   

     return 0;

}