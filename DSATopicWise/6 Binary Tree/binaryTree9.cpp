// ............. level order traversal Linked List .............

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"
static vector<node<int>*> headArr ; 

template <typename T>
class node{
  public:
    T data;
    node<T>* next;

    node(T data){
        this->data = data;
        next = NULL;
    }
};


//....... printing levelorder .........
vector<node<int>*> levelWiseLL(binaryTree<int>* root){
    if(root == NULL){
        vector<node<int>*> x;
        x.push_back(NULL);
        return x;
    }
     
    queue<binaryTree<int>*> Q;
    Q.push(root);
    Q.push(NULL);

    while(!Q.empty()){
        binaryTree<int>* front = Q.front();
        Q.pop();

         node<int>* head = NULL;    
         node<int>* tail = NULL;

        if(!Q.empty() && front == NULL){
            headArr.push_back(head);
            head = NULL;
            tail = NULL;
            Q.push(NULL);
            cout << endl;
        }
        if(front != NULL){
            node<int>* temp = new node<int>(front->data);
            if(head == NULL){
                head = temp;
                tail = temp;
            }else{
                tail->next = temp;
                tail = temp; 
            }
            

            if(front->left != NULL)
                Q.push(front->left);

            if(front->right != NULL)
                  Q.push(front->right);     
        }
    }

    return headArr;
}

// take input..................
binaryTree<int>* takeInput(){

    cout << "Enter Root Data : ";
    int data; cin >> data;
    cout << endl;
     
     if(data == -1)
     return NULL;

    binaryTree<int>* root = new binaryTree<int>(data);
    queue<binaryTree<int>*> Q;
    Q.push(root);

    while(!Q.empty()){
        binaryTree<int>* front = Q.front();
        Q.pop();

        cout << "Enter left child for " << front->data  << " : ";
        int leftchild; cin >> leftchild;
        
        cout << endl;
        if(leftchild!=-1){
            binaryTree<int>* child = new binaryTree<int>(leftchild);
            front->left = child;
            Q.push(child);
        }

        cout << "Enter right child for " << front->data  << " : ";
        int rightchild; cin >> rightchild;

        if(rightchild!=-1){
            binaryTree<int>* child = new binaryTree<int>(rightchild);
            front->right = child;
            Q.push(child);
        }
        cout << endl;
    }
return root;

}

/*
i/p ----------->
1 
10 20 30 -1 -1 40 50 -1 -1 60 70 1 2 80 90 -1 -1 -1 -1 -1 -1 100 -1 -1 110 -1 -1 

o/p--------------------->



*/
//....... print LL ..............
void printLL(node<int>* head){
    node<int>* temp = head;

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
      
      int test; cin >> test;
      while(test--){
           binaryTree<int>* root = takeInput();

        cout << "\n";

        vector <node<int>*> v = levelWiseLL(root);

        for(int i=0; i<v.size(); i++){
            printLL(v[i]);
            cout << endl;
        }


      } 


return 0;
    
}