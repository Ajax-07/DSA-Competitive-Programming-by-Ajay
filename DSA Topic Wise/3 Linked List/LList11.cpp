//................. return a reversed linked list recursively..........

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"
//............. O(N) .........

node* reversed3(node* head){
    node* prev = NULL;
    node* curr = head;
    node* next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

// ........  O(N) .............
node* reversed2(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    node* smallAns = reversed2(head->next);
    
    head->next->next = head;
    head->next=NULL;

   return head = smallAns;
}


//.....   O(N^2)   .......................
node* reversed1(node* head){
    if(head==NULL||head->next==NULL)
       return head;
    
    node* smallAns = reversed1(head->next);
    node* temp = smallAns;
    while(temp->next!=NULL)
         temp = temp->next;
    temp->next = head;
    head->next = NULL;
    head = smallAns;
    return head;    
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

    node* head = takeInput();

    print(head);

//........... O(N^2) .....
   // node* head2 = reversed1(head);
   //print(head2);
    
//........... O(N)  ........
 // node* head3 = reversed2(head);
 // print(head3);

  // other approach : returning head and tail pointer (by struct or class);

  //other approach ..................
  node* head4 = reversed3(head);
  print(head4);

    
}