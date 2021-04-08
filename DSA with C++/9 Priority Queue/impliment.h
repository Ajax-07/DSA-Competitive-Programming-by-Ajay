// implimentation of Priority Queue  all operation in O(logn) : using min heap

template <typename T>
class priorityQueue{
    T* pq;
    int index;
    int currentSize;
    int capacity;
    
    // heapify the current heap after insertion O(logn)
    void up_heapify(T* arr, int i){
        if(i<=0)
           return;
        int parentIndex = (i-1)/2;
        if(arr[i] >= arr[parentIndex])
          return ;
        // swap child element with parent elemnt
         T temp = arr[i];
         arr[i] = arr[parentIndex];
         arr[parentIndex] = temp;

         up_heapify(arr, parentIndex);   
    }
    
    // heapify the current heap ater deletion O(logn)
    void down_heapify(T* arr, int i){
       int leftChild = 2*i+1;
       int rightChild = 2*i+2;
       
       if( (leftChild > index )  || (arr[i] <= arr[leftChild] && arr[i] <= arr[rightChild]) )
            return;

       if(rightChild <= index){
           if(arr[leftChild] < arr[rightChild]){
               T temp = arr[i];
               arr[i] = arr[leftChild];
               arr[leftChild] = temp;
               down_heapify(arr,leftChild);
           }else{
               T temp = arr[i];
               arr[i] = arr[rightChild];
               arr[rightChild] = temp;
               down_heapify(arr,rightChild);
           }
       }else{
               T temp = arr[i];
               arr[i] = arr[leftChild];
               arr[leftChild] = temp;
               down_heapify(arr,leftChild);
       }     
    }

    // resizing the array capacity

    void resize(T* arr){
        capacity *= 2;
        T* temp = new T[capacity];
        for(int i=0; i<index; i++)
            temp[i] = pq[i];
        
        delete [] pq;
        pq = temp;
    }


    public:
      
      
      // Constructor 
      priorityQueue(){
          pq = new T[capacity];
          index = -1;
          currentSize = 0;
          capacity = 2;
      }

      // get size of Queue
      int size(){
          return currentSize;
      }

      // Check Queue is Empty
      bool isEmpty(){
          return currentSize == 0;
      }

      //  get the most prioretise element
      T getMin(){
          if(isEmpty()){
              cout << "Priority Queue is Empty";
              return 0;
          }
          return pq[0];
      }

      // insert an element in Queue

      void insert(T data){
          index++;
          if(index == capacity){
              resize(pq);
          }
          pq[index] = data;
          currentSize++;
          up_heapify(pq,index); 
      } 

      // delete the element
      T remove(){

          if(isEmpty()){
              cout << "Empty! ";
              return 0 ;
          }
          T temp = pq[0];
          pq[0] = pq[index];

          index--;
          currentSize--;
          down_heapify(pq,0);

          return temp;
      }
      
      // destructor
      ~priorityQueue(){
          delete [] pq;
      }
};