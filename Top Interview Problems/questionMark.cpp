#include <bits/stdc++.h>
using namespace std;

string QuestionsMarks(string str) {
  
  // code goes here  
  int num;
  int count;

  for(int i=0; i<str.length(); i++){
    if(str[i] == '?' && num > 0){
      count++;
    }
    if(str[i] >= '0' && str[i] <= '9'){
       if(num == 0){
         num = str[i]-48;
       }else{
         if((str[i]-48) + num == 10 && count == 3)
            return "true";

          num = str[i]-48;
          count = 0;
       }
    }
  }

  return "false";

}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string s = "j?????hsuw4j?????d???ud?6??7???3 = ??? 7js??dgh3";
    cout << QuestionsMarks(s);

    return 0;    

}