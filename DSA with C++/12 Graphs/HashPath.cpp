// given two vertices s and e find if there is any path between these 

#include<bits/stdc++.h>
using namespace std;


bool isPath(int** edges, int n, int s, int e, bool* visited){

  if(s == e || edges[s][e])
    return true;
 
  visited[s] = true;

  for(int i=0; i<n; i++){
      if(i == s)
        continue;
      if(!edges[s][i] && !visited[i])
         return isPath(edges,n, i, e, visited);  
  }

 for(int i=0; i<n; i++)
     if(!visited[i])
       return isPath(edges,n,i,e,visited);

  return false;  
    
}

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

    

    (isPath(edges, vertices, sv, ev, visited)) ? cout << "Yes" : cout << "No";

    for(int i=0; i<vertices; i++)
       delete [] edges[i];
    delete [] edges; 
    
    delete []  visited;
    
    return 0;

}