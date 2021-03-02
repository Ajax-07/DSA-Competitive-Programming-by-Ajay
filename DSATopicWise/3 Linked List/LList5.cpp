
//........... rotate linked list by N element........
//........... Or , append last N node in first ..........

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"

node* rotateList(node* head, int N){
    node* temp1 = head;
    int totalNode = 0;
    while(temp1!=NULL){
        temp1 = temp1->next;
        totalNode++;
    }
    if(totalNode==1 || totalNode==0)
      return head;
    if(N==totalNode)
      return head;  
    
    temp1 = head;
    node* temp2 = head;
    int k=0;
    while(k<totalNode-N-1){
        temp2=temp2->next;
        k++;
    }
        

    head = temp2->next;
    temp2->next = NULL;

    temp2 = head; 
     k=0; 
    while(k<N-1){
        temp2=temp2->next;
        k++;
    }

    temp2->next = temp1;

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
    
    node* head2 = rotateList(head,8);
    print(head2);
}