//................. mrege two sorted linked lists and return
//................. a final sorted linked list ............

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"

node* mergeTwoLL(node* head1,node* head2){
    node* temp1 = head1;
    node* temp2 = head2;

    node* Head = NULL;
    node* X = NULL;
    while(temp1!=NULL && temp2!=NULL){
         int x=0;
        if(temp1->data<=temp2->data){
            x=temp1->data;
            temp1 = temp1->next;
        }
        else if(temp1->data>=temp2->data){
            x = temp2->data;
            temp2 = temp2->next;
        }
        
        node* newNode = new node(x);
        if(Head==NULL){
            Head = newNode;
            X = newNode;
        }
        else{
            X->next = newNode;
            X = newNode;
        }
    }
    
    while(temp1!=NULL){
        node* newNode = new node(temp1->data);
        X->next = newNode;
        X=newNode;
        temp1 = temp1->next;
    }
    while(temp2!=NULL){
        node* newNode = new node(temp2->data);
        X->next = newNode;
        X=newNode;
        temp2=temp2->next;
    }
    return Head;
}

//.........take input.......
node* takeInput(){
    int data;
    node* head=NULL;
    node* tail = NULL;
    while(cin >> data && data!=-1){
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

    node* head1 = takeInput();
    node* head2 = takeInput();

    print(head1);
    print(head2);
    
    node* res = mergeTwoLL(head1,head2);
    print(res);
   
}