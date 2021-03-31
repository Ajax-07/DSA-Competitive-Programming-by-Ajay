
// Implementing own Hashmap class 


#include<string>
using namespace std;


// class for linked list which store key , value , and next pointer
template <typename V>
class mapNode{
    public:
    string key;
    V value;
    mapNode<V>* next;
    
    
    mapNode(string key, V value){
        this->key = key;
        this->value =value;
        next = NULL;
    }

    ~mapNode(){
        delete next;
    }

  
};

//   class for hashmap
template <typename V>
class ourMap{
    mapNode<V>** A;             //Bucket of linked list head;
    int currSize;
    int capacity;

 //   Hash function which takes key and return a integer value in range of capacity
    int getIndex(string key){
        int hashcode = 0;
        int coefficient = 1;

        for(int i=key.length()-1; i>=0; i--){
            hashcode += key[i]*coefficient;
            hashcode %=capacity;
            coefficient *= 37;
            coefficient %= capacity;
        }

        return hashcode%capacity;
    }


// Rehashing of current hashmap
    void rehash(){
        mapNode<V>** temp = A;
        int oldCapacity = capacity;
        capacity *= 2;
        currSize = 0;
        A = new mapNode<V>*[capacity];
        for(int i=0; i<capacity; i++)
            A[i] = NULL;

        for(int i=0; i<oldCapacity; i++){
            mapNode<V>* head = temp[i];
            while(head){
                string key = head->key;
                V value = head->value;
                insert(key, value);
                head = head->next;
            }
        }

        for(int i=0; i<oldCapacity; i++){
            delete temp[i];
        }    

        delete [] temp;
    }

    public:

// constructor
    ourMap(){
        currSize = 0;
        capacity = 5;
        A = new mapNode<V>*[capacity];
        for(int i=0; i<capacity; i++)
              A[i] = NULL;
    }  

//  return current size of map
    int size(){
        return currSize;
    }

//   Insert or Update key , value pair into map
    void insert(string key, V value){
        int arrIndex = getIndex(key);
        
        mapNode<V>* head = A[arrIndex];
         while(head){
             if(head->key == key){
                head->value = value;
                return;
             }
             head = head->next;
         }
         mapNode<V>* node = new mapNode<V>(key, value);
         node->next = A[arrIndex];
         A[arrIndex] = node;
         currSize++; 
         
         double loadFactor = (double)currSize/capacity;
         if(loadFactor > 0.7){
             rehash();
         }
    }

//  Acces or get a value corresponding to a given key     
    V getValue(string key){
        int arrIndex = getIndex(key);

        mapNode<V>* head = A[arrIndex];
        while(head){
            if(head->key == key)
                 return head->value;
            head = head->next;     
        }

        return 0;
    }

// Remove a value corresponding to a given key and return that value
    V remove(string key){
        int arrIndex = getIndex(key);

        mapNode<V>* head = A[arrIndex];
        mapNode<V>* prev = NULL;
        
        while(head){
            if(head->key == key){
                if(prev)
                    prev->next = head->next;
                else
                   A[arrIndex] = head->next;

                V val = head->value;
                head->next = NULL;
                delete head;
                currSize--;
                return val;       
            }

            prev = head;
            head = head->next;
          
        }
        return 0;
    }

// destructor 
     ~ourMap(){
         for(int i=0; i<capacity; i++)
            delete A[i];
         delete [] A;   
     }             
        
};