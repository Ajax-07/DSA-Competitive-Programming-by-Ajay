//............. find the index of given element in linked list..........

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"

  int findIndex(node* head,int data){
      node* temp = head;
      int index = 0;

      while(temp!=NULL){
          if(temp->data == data)
             break;
          temp = temp->next;
          index++;
      } 

      if(temp==NULL)
        return -1;

      else return index;      
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
    
    cout << findIndex(head,4);
}