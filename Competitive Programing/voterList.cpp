// codechef : Discrepancies in the Voters List - [https://www.codechef.com/problems/VOTERS]

#include<bits/stdc++.h>
using namespace std;

int main(){
     #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;

   unordered_map<int,int> myMap;
   int i=0;
   while(i<n1+n2+n3){
       int id; 
       cin >> id;
       if(myMap.find(id) != myMap.end()){
           myMap[id]++;
       }else{
           myMap.insert(pair<int,int>(id,1));
       }
       i++;
   }
   vector<int> finalList;
   unordered_map<int,int> ::iterator it = myMap.begin();
   while(it != myMap.end()){
       if(it->second > 1)
          finalList.push_back(it->first);
      it++;    
   }
sort(finalList.begin(),finalList.end());
cout << finalList.size() << endl;
for(int i=0; i<finalList.size(); i++)
    cout << finalList[i] << endl;

    return 0;
}