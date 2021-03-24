//  ................... construct a sorted Linked List from a binary search tree .......... 

#include<bits/stdc++.h>
using namespace std;

#include "BSTClass.h"





// linked list node class
template <typename T>
class node{
    public : 
      T data;
      node<T>* next;
     
      node(T data) : data(data),next(NULL) {}
};
//............ TC : O(N) ..........
pair<node<int>*, node<int>*> constructLL2(BST<int>* root){
    if(root == NULL){
        pair<node<int>*, node<int>*>  p;
        p.first = NULL;
        p.second = NULL;
        return p;
    }
    
    node<int>* head = new node<int>(root->data);
    pair<node<int>*, node<int>*> res;
    res.first = head;
    res.second = head;


    if(root->left){
        pair<node<int>*, node<int>*> left = constructLL2(root->left);
        left.second->next = res.first;
        res.first = left.first;
        left.second = res.first;
    }

    if(root->right){
        pair<node<int>*, node<int>*> right = constructLL2(root->right);
        head->next = right.first;
        res.second = right.second;
    }

    return res;
}

// .............. TC :  O(N^2)  ..............
node<int>* constructLL1(BST<int>* root){
    if(root == NULL)
     return NULL;

     node<int>* head = new node<int>(root->data);
     node<int>* temp = head;

    if(root->left){
        node<int>* leftLL  = constructLL1(root->left); 
        node<int>* tail = leftLL;
        while(tail->next)
            tail = tail->next;
        tail->next = head;
        head = leftLL;   
    }

    if(root->right){
      node<int>* rightLL  = constructLL1(root->right);
      temp->next = rightLL;
    }
 
    return head;
}

void printLL(node<int>* head){
    node<int>* temp = head;

    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    } 
}


//take input
BST<int>* takeInput(){
    cout << "Enter Root Node : " << endl;
    int data;
    cin >> data;

    BST<int>* root = new BST<int>(data);

    queue<BST<int>*> temp;
    temp.push(root);

    while(!temp.empty()){
        BST<int>* front = temp.front();
        temp.pop();

        int leftNode;
        int rightNode;

        cout << "Enter Left node for " << front->data << ": " << endl;
        cin >> leftNode;
        cout << "Enter right node for " << front->data << ": " << endl;
        cin >> rightNode;

        if(leftNode != -1){
            BST<int>* left = new BST<int>(leftNode);
            front->left = left;
            temp.push(left);
        } 
        if(rightNode != -1){
            BST<int>* right = new BST<int>(rightNode);
            front->right = right ;
            temp.push(right);
        } 

    }

    return root;
}


/*

I/P : 
3
687 -1 -1 
1177 416 1474 364 684 1392 1498 -1 -1 -1 694 -1 1456 -1 1930 -1 -1 -1 -1 -1 -1 
1229 501 1551 145 627 1382 1677 93 289 569 677 1334 1410 1556 1803 -1 -1 -1 299 -1 -1 -1 1184 -1 -1 -1 1482 -1 1604 -1 1862 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 

O/P :
687
364 416 684 694 1177 1392 1456 1474 1498 1930 
93 145 289 299 501 569 627 677 1184 1229 1334 1382 1410 1482 1551 1556 1604 1677 1803 1862 


*/
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

   int test; cin >> test;
   while(test--){
       BST<int>* root = takeInput();

       // .... O(N^2)
       node<int>* head = constructLL1(root); 
      

        printLL(head);
        cout << endl<< endl;
       
       //.......  O(N)
       pair<node<int>*, node<int>*> Head = constructLL2(root);
       
       printLL(Head.first);
       cout << endl<< endl;
      
   }
  return 0; 

}