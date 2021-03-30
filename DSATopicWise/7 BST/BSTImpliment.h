//......... Implimentation of Binary search tree in class TC : O(Height) if balanced TC : O(logN).............

// Don't make template because of string , char, bool datatype . It's difficult to compare them

#include "BSTClass.h"

class BSTclass{
   // private member and helper function...................................................................

    BST<int>* root;

   // helper function for searchData .................(function overloading)
    bool searchData(BST<int>* root, int data){
         if(root == NULL)
             return false;

          if(root->data == data)
              return true;
          if(data < root->data)
               return searchData(root->left, data);
           
           return searchData(root->right,data);  
    }

    // helper function for insertData .................(function overloading)
    BST<int>*  insertData(BST<int>* root, int data){
         if(root == NULL){
            BST<int>* newRoot = new BST<int>(data);
                 return newRoot;
          }

          if(data < root->data){
              root->left = insertData(root->left, data);
              return root;
          } 
          else{
              root->right = insertData(root->right,data);
              return root;
          } 
            
    }

  // helper function for searchData .................(function overloading)
    
     BST<int>* deleteData(BST<int>* root, int data){
         if(root == NULL)
            return NULL;

        if(data < root->data ){
            root->left = deleteData(root->left,data);   
            return root;
        }

        else if(data > root->data ){
              root->right = deleteData(root->right,data);
              return root;
        }

        else{
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }
            else if(root->left == NULL ){
                BST<int>* temp = root->right;
                root->right = NULL;
                delete root;
                return temp;
            }
            else if(root->right == NULL){
                BST<int>* temp = root->left;
                root->left = NULL;
                delete root;
                return temp;
            }
            else{
                BST<int>* minNode = root->right;
                while(minNode->left)
                   minNode = minNode->left;
                root->data = minNode->data;
               root->right =  deleteData(root->right, minNode->data);
               return root;   
            }
        } 

       

     }
   
 // helper function for print .................(function overloading)
     void print(BST<int>* root){
       if(root == NULL)
          return; 

       cout << root->data << " ";

       print(root->left);
       print(root->right);

   }

//...........................................public member ...........................................
    public:
      
      // constructor...........
      BSTclass() : root(NULL) {}
    
     // insert data into BST 
      void insertData(int data){
         root =  insertData(root, data);
      }
     
      //  delete Data from BST
      void deleteData(int data){
         root =  deleteData(root, data);
      } 

      //  Search a data in BST
      bool searchData(int data){
        return searchData(root,data);       
      }

      // print BST (preorder traversal)
       void print(){
           print(root);    
       }
      
      // destructor..............
      ~BSTclass(){
          delete root;
      }
};
