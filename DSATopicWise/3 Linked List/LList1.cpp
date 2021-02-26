// .......Take input in linked list and print .........
//........ insert an element at ith position .........

#include<bits/stdc++.h>
using namespace std;

#include "NODE.cpp"

//..................INSERT element at ith position........................
node* Insert(node* head , int data,int pos){
    node newNode(data);

    node* temp = head;
    int count  = 0;
    while(temp!=NULL && count < pos-1){
        temp = temp->next;
        count++;  
    }

    if(temp!=NULL && pos>0){
        newNode.next = temp->next;
        temp->next = &newNode;
    }

    else if(pos==0){
        newNode.next = head;
        head = &newNode;
    }
    return head;
}
//................. DELETE ith element in linked list ...................
node* DeleteNode(node* head, int pos){
    int count = 0;
    node* temp = head;
    while(temp!=NULL && count<pos-1){
        temp = temp->next;
        count++;
    }

    if(temp!=NULL && pos>0)
        temp->next = temp->next->next;
    else if(pos==0)
        head = head->next;
    

    return head;
}


//.................take input in linked list...........................
node* takeInput(){
    int x;
    node* head=NULL;
    node* temp=NULL;      //....or node* tail ..........

    while(cin >> x){
        node* newNode = new node(x);
        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }
    }

    return head;
}

//...................print linked list........................
void print(node* head){
    node* temp = head ; 

    while(temp != NULL ){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}


//................... driver function ...............
int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    
    node* head = takeInput();
    
    print(head);
    
    node* newHead = Insert(head,1000,10);
    print(newHead);

    node* h2 = DeleteNode(newHead,6);
    print(h2);


    return 0;
}