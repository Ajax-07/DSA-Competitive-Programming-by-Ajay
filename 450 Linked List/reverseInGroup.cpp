// #2 - [https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1]

#include<bits/stdc++.h>
using namespace std;

 struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    };

class Solution
{
    public:
    struct node* reverse (struct node *head, int k)
    { 
        // Complete this method
      int n=0;
      
      node* parso = NULL;
      node* aaj = head;
      node* kal = NULL;
      
      while(aaj && n<k){
          kal = aaj->next;
          aaj->next = parso;
          parso = aaj;
          aaj = kal;
          n++;
      }
      
      if(aaj)
        head->next = reverse(aaj, k);
      
      return parso;
    }
      
};