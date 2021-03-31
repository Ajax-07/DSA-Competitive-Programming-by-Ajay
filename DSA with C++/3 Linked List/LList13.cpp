//... print evry N Nodes after M node ..........................

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"
 
 node* removeNafterM(node* head, int m, int n){
     node* temp1 = head;
     node* temp2=NULL;
    
    while(temp1!=NULL){
    int k=1;
  
     while(k<m && temp1!=NULL ){
         temp1 = temp1->next;
         k++; 
        }
     
     if(temp1==nullptr)
       return head;

    temp2 = temp1->next;
    k=0;
     while(k<n && temp2!=NULL){
            temp2 = temp2->next;  
            k++;
         }

     temp1->next = temp2;
     temp1 = temp2;
    }

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
	int m, n;

    cin >> m >> n;
     print (head);
	
     node* res = removeNafterM(head,m,n);
	 print(res);
	 
   return 0;

}