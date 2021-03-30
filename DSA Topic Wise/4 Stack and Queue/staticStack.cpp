//......................... STATICALLY   ..................

//....................   implimenetation  of  stack  using  array  ........

using namespace std;

class StackUsingArray{
    int* data;
    int nextIndex;
    int capacity;

    public:
      //..... Initializing properties...........
      StackUsingArray(int size){
          data = new int[size];
          nextIndex = 0;
          capacity = size;
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
      void push(int element){
          if(nextIndex == capacity){
              cout << "Stack is full" << endl;
              return;
          }
          data[nextIndex] = element;
          nextIndex++;
      }

      //.............. return top element ...........
      int top(){
          if(isEmpty()){
              cout << "stack is empty" << endl;
              return -1;
          }
          return data[nextIndex-1];
      }

      //........ delete or pop the top element   .....
      int pop(){
          if(isEmpty()){
              cout << "stack is empty" ;
              return -1;
          }
          nextIndex--;
          return data[nextIndex];
      }
};