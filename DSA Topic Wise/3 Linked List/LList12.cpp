//.......... reverse every k group of node in linked list ...........

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"


 
node* reverseKGroup(node* head, int k) {

        node* prev = NULL;
        node* next = NULL;
        node* curr = head; 
		int x = 0;
        while(x<k && curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;

			x++;
        }
        
		if(next != NULL)
          head->next = reverseKGroup(next,k);
        
		return prev;
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
	 int k ; cin >> k;
     print (head);
	
	 node* H = reverseKGroup(head,k);
	 print(H);
	 
   return 0;

}