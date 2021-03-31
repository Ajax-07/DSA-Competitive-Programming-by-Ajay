
//........... check linked list is palindrome ...............

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"
 
// .... 1st approach .....
bool checkPalindrome1(node* head){
    node* temp = head;
    
    node* newList=NULL;
    while(temp != NULL){
         node* newnode = new node(temp->data);
         if(newList == NULL)
            newList = newnode;
         else{
             newnode->next = newList;
             newList = newnode;
         }   
         temp=temp->next;
    }
  
   bool flag = false;

    temp=head;
    node* temp2 = newList;
    while(temp!=NULL){
        if(temp->data == temp2->data)
           flag = true;
        else flag = false;

        if(flag == false)
           break;  

        temp = temp->next;
        temp2 = temp2->next;    
    }

    return flag;
} 


//.........take input.......
node* takeInput(){
    int data;
    node* head=NULL;
    node* tail = NULL;
    while(cin >> data){
        node* newnode = new node(data);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    return head;
}


//............. print linked list ..........
void print(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout << temp -> data << " ";
        temp = temp->next;
    }
   cout << endl;
}

int main(){
     #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    node* head = takeInput();
    print(head);
    
    // 1st approach TC:O(N), SC:O(N).........
    bool flag1 = checkPalindrome1(head);
    (flag1) ? cout << "YES" << endl : cout << "NO" << endl;

}