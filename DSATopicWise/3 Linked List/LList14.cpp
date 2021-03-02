
//.............. Swap two given node in linked list .............

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"
 

void SwapLL(node* head,int i, int j){
    node* temp1 = head;

    while(i--)
      temp1 = temp1->next;
    
    j -=i+1;
    node* temp2 = head;
    
     while(j--)
       temp2 = temp2->next; 


      int k = temp1->data;
      temp1->data = temp2->data;
      temp2->data = k;
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
	 int i, j;
     cin >> i >> j;
     print (head);
	 
     SwapLL(head,i,j);
	 print(head);
	 
   return 0;

}