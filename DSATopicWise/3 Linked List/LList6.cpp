
//........... remove all duplicate in Linked List ...............

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"

node* removeDup(node* head){
    node* temp1 = head;
    node* temp2 = head->next;

    while(temp2!=NULL){
        if(temp1->data == temp2->data)
        
          temp2 = temp2->next;
        else{
            temp1->next = temp2;
            temp1 = temp2;
            temp2 = temp2->next;
        }
    }

    temp1->next = temp2;
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
    
    node* head2 = removeDup(head);
    print(head2);
}