
//................ insert a node in linked list recursively .............

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"

node* insertRec(node* head ,int data, int pos){
    if(head == NULL){
        return head;
    }

    if(pos==0){
       node* newn = new node(data);
       newn->next = head;
       head = newn;
    }

   else head->next = insertRec(head->next,data,pos-1);
    return head; 
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

//.................print linked list ..............

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
   

    //.......... inserting node recursively ...........
    node* head2 = insertRec(head,8637276,9);
    print(head2);
}