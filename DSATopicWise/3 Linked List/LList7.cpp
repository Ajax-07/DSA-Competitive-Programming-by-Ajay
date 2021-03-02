
//........... print reversed linked list ...............

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"


// ......... Recursive approach ............
void printReverse(node* head){
    if(head == NULL)
      return;

    printReverse(head->next);
    cout << head->data << " ";

}

//other approach ................
node* reversed(node* head){
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
  return newList;
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
    
    //recursive approach .........
    printReverse(head);
    cout << endl;

    // other approach may be in TC : O(N) & SC : O(N);
    node *newList = reversed(head);

}