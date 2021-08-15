// #1 - [https://www.geeksforgeeks.org/reverse-a-linked-list/]

#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node *next;
};



class Solution
{
    public:
    
    
    
pair<struct Node*,struct Node*> helper(struct Node* head){
    if(head==NULL || head->next==NULL){
        pair<struct Node*, struct Node*> p = {head, head};
        return p;
    }
    
    pair<struct Node*,struct Node*> smallAns = helper(head->next);
    
    smallAns.second->next = head; 
    head->next = NULL;
    
    pair<struct Node*,struct Node*> ans ;
    ans.first = smallAns.first;
    ans.second = head;
    
    return ans;
    
} 

    
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        
        // recursive
        return helper(head).first;

        /*
        // iterative
         
       Node* next = NULL;
       Node* curr = head;
       Node* prev = NULL;
       
       while(curr){
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
       }
       
       return prev;
       
        
        */

    }
    
};
    