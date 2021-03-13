//................ nearest greater to right | next largest element ........

#include<bits/stdc++.h>
using namespace std;

int totalReverasal(string str){
    
    if(str.size()%2 !=0 )
    return -1;


    stack <char> st;
    int count=0;
    for(int i=0; i<str.size(); i++){
        if(str[i] == '{')
          st.push(str[i]);
        else if(str[i] == '}' && st.empty()) {
            st.push(str[i]);
        }  
        else if(str[i] == '}' && !st.empty()){
            if(st.top() == '}')
               st.push(str[i]);

             else {
                 st.pop() ;
                 count++;
                } 
        }
    }

    count += st.size() /2 ;

    return count;
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
    #endif

    string str;
    cin >> str;


    cout << totalReverasal(str);

    return 0;
}