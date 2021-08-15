// #1

//..................... DYNAMICALLY   ...........

//....................   implimenetation  of  stack  using  array making template........

using namespace std;
#include "LinkedList.cpp"

template <typename T>
class StackUsingArray{
    T* data;
    int nextIndex;
    int capacity;

    public:
      //..... Initializing properties...........
      StackUsingArray(){
          data = new T[capacity];
          nextIndex = 0;
          capacity = 2;
      }

      //........... return size of stack .........
      int size(){
          return nextIndex;
      }

      //.......  check stack is empty .............
      bool isEmpty(){
          return nextIndex == 0;
      }

      //......... push an element  ...........
      void push(T element){
          if(nextIndex == capacity){
              T* newData = new T[2*capacity];
              for(int i=0; i<capacity; i++)
                  newData[i] = data[i];

              delete [] data;
              data = newData;    
          }

          data[nextIndex] = element;
          nextIndex++;
      }

      //.............. return top element ...........
      T top(){
          if(isEmpty()){
              cout << "stack is empty" << endl;
              return 0;
          }
          return data[nextIndex-1];
      }

      //........ delete or pop the top element   .....
      T pop(){
          if(isEmpty()){
              cout << "stack is empty" ;
              return 0;
          }
          nextIndex--;
          return data[nextIndex];
      }
};




//............. implimentation of stack using Linked List using Template ..............
template <typename T>
class StackUsingLL{
    node <T> *head;
    int totalSize;

    public:
//...     Initialization   .........
       StackUsingLL(){
           head = NULL;
           totalSize = 0;
       }

//......      return size    .....
       int size(){
           return totalSize;
       }

//.......      check stack is empty       ..........
        bool isEmpty(){
            return head == NULL;
        }        

//........     push an element       .......
        void push(T element){
            node <T> *newNode = new node<T>(element);

          newNode->next = head;
           head = newNode;
 
           totalSize++;
        }

// .........   return top most element     .............
        T top(){
            if(isEmpty()){
                cout << "stack is empty";
                return 0;
            }
            return head->data;
        }    

//................  delete or pop the topmost elemnt  .............

       T pop(){
           if(isEmpty()){
               cout << "stack is empty";
               return 0;
           }
           T data =  head->data;
           node <T> *temp = head;
           head = head->next;
           delete temp;
           totalSize--;
           return data;
       }
};