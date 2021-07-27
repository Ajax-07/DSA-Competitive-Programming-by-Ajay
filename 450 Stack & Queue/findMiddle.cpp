// #4 - []
#include<bits/stdc++.h>
using namespace std;
#include "findMiddleElment.h"

int main(){
    specialStack st ;
    st.push(11); 
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66);
    //st.push(77);
   
    
 
    cout << "stack size " << st.getSize() << endl;
    cout << "Item popped is " << st.pop() << endl;
    cout << "Item popped is " << st.pop() << endl;
    cout << "Item popped is " << st.pop() << endl;
    cout << "Middle Element is " << st.middle() << endl;
    cout << "Deleted Middle Element is "<< st.popMiddle()<<endl;
    cout << "Middle Element is " << st.middle() << endl;
    return 0;
}