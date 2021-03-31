// ...........Implimentation of Queue using Array (dynamic implimentaion)...............

#include "LinkedList.cpp"

template <typename T>
class QueueUsingArrayDmcly{
    T* data;
    int firstIndex;
    int nextIndex;
    int size;
    int capacity;

    public:

    // ........ Initialization .........
       QueueUsingArrayDmcly(){
           data = new T[capacity];
           firstIndex = -1;
           nextIndex = 0;
           size = 0;
           capacity=2;
       }

       //............... return size ......
       int Size(){
           return size;
       }

       //........ check is empty .......
       bool isEmpty(){
           return size == 0;
       }

       //.........  insert an element  .......
       void enqueue(T element){

           if(size == capacity){
               T* newData = new T[2*capacity];
               int k=0;
             for(int i=firstIndex; i<capacity; i++){
                 newData[k] = data[i];
                 k++;
             }
             for(int i=0; i<firstIndex; i++){
                 newData[k] = data[i];
                 k++;
             }
             delete [] data;
              data = newData;
              firstIndex = 0;
              nextIndex = capacity;
              capacity *= 2;
           }
              data[nextIndex] = element; 
            nextIndex = (nextIndex+1)%capacity;
            size++;
            if(firstIndex == -1)
                   firstIndex = 0;   
       }

       // ....... dequeue an element from queue......................
       T dequeue(){
           if(isEmpty()){
               cout << "Queue Empty !" ;
               return 0;
           }
           T ans = data[firstIndex];
           firstIndex = (firstIndex+1)%capacity;
           size--;
           if(size == 0){
               firstIndex = -1;
               nextIndex = 0;
           }
           return ans;
       }

    //......... return front ......
    T front(){
        if(isEmpty()){
            cout << "Queue Empty!";
            return 0;
        }
        return data[firstIndex];
    }
};




// ...........Implimentation of Queue using Array (dynamic implimentaion)...............

template <typename T>
class QueueUsingLLDmcly{
    node<T>* head;
    node<T>* tail;
    int totalSize;

    public:

    //..... Initialization .......
      QueueUsingLLDmcly(){
          head = NULL;
          tail = NULL;
          totalSize = 0;
      }

      //........ return size ............
      int size(){
          return totalSize;
      }

      //............ check Queue is empty .........
      bool isEmpty(){
          return totalSize == 0;
      }

      //.......... insert an element .........
      void enqueue(T element){
          node<T>* newNode = new node<T>(element);
          if(head == NULL){
              head = newNode;
              tail = newNode;
          }
          else{
              tail->next=newNode;
              tail = newNode;
          }
          totalSize++;
      }

      //......... return front element.......
      T front(){
          if(head == NULL){
              cout << "Queue Empty!";
              return 0;
          }
          return head->data;
      }

      //........... delete front element ........
      T dequeue(){
          if(head == NULL){
              cout << "Queue Empty!";
              return 0;
          }
          node<T>* temp = head;
          T ans = temp->data;
          head = head->next;
          delete temp;
          totalSize--;
          return ans;
      }


};