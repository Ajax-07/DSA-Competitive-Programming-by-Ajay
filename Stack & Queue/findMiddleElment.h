// #4 - 
#include "linkedList.h"
#include<bits/stdc++.h>
using namespace std;

// using linkedList
class specialStack{
    node* head;
    int size;
    node* last;
    node* mid;

    public:
    specialStack(){
       head = NULL;
       size = 0;
       last = NULL;
       mid = NULL;
    }

    int getSize(){
        return size;
    }

    void push(int x){
        node* NEWNODE = new node(x);
        if(!head){
            head = NEWNODE;
            last = NEWNODE;
            mid = NEWNODE;
        }else{
            NEWNODE->prev = last;
            last->next = NEWNODE;
        }
        size++;
        if(size%2 == 1 && size > 1){
            mid = mid->next;
        }
    }

    int pop(){
        if(size == 0)
           return -1;

        int topData = last->data;  
        node* temp = last;
        last = last->prev; 
        last->next = NULL; 
        temp->prev=NULL;
        size--;
        if(size%2 == 0){
            mid = mid->prev;
        } 
        delete temp;
        return topData;
    }

    int top(){
        if(size == 0)
           return -1;
        return last->data;   
    }

    int popMiddle(){
        if(size == 0){
            return -1;
        }
        node* temp1 = mid;
        node* temp2 = mid->prev;
        int midData = mid->data; 
        if(!mid->prev){
            head = mid->next;
            mid->next = NULL;
        }else{  
            mid->prev->next = mid->next;
            mid->prev = mid->next = NULL;
        }
        size--; 
            if(size%2 == 0)
               mid = temp2->prev;    
        delete temp1;
        return midData;  
    }

    int middle(){
        if(size == 0)
           return -1;

        return mid->data;   
    }
 
};
