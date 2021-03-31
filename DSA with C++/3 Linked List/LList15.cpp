
//.............. arrange linked list even after odd .............

#include<bits/stdc++.h>
using namespace std;
#include "NODE.cpp"

node* evenAfterOdd(node* head){
    node* temp = head;
    node* odd = NULL;
    node* oddT = NULL;
    node* eve = NULL;
    node* eveT = NULL;
    
    while(temp!=NULL){
        int data = temp->data;

        if(data%2 == 0){
            if(eve == NULL){
                eve = temp;
                eveT = temp;
            }
            else{
                eveT->next = temp;
                eveT = temp;
            }    
        }
        else{
            if(odd == NULL){
                odd = temp;
                oddT = temp;
            }
            else{
                oddT->next = temp;
                oddT = temp;
            }
        }
        temp = temp->next;
    }

    if(odd == NULL)
       return eve;
    else if (eve == NULL)
       return odd;
    else{
        oddT->next = eve;
        eveT->next = NULL;
        head = odd;
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
     print (head);
	 
    node* res = evenAfterOdd(head);
    print(res);
	 
   return 0;

}