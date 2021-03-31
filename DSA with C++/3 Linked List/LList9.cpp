//................. return midpoint of linked list ............

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"

int midPoint(node* head ){
    node* slow = head;
    node* fast = head->next;

    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
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
    
    // 1st approach using length of linked list ..........
    int mid = midPoint(head);
    cout << mid ;

    // 2nd approach .... find length and traverse upto (n-1)/2 and print ...
}