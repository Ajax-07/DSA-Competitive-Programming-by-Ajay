
// ...........Implimentation of Queue using Array (Static implimentaion)...............


using namespace std;


class QueueUsingArray{
    int* data;
    int firstIndex;
    int nextIndex;
    int size;
    int capacity ;

    public:
       
       // ........... Initializing .........
       QueueUsingArray(int totalSize){
           data = new int[totalSize];   
           firstIndex = -1;
           nextIndex = 0;
           size = 0;
           capacity = totalSize; 
       }

       //........... Current size of Queue ..........
       int Size(){
           return size;
       }
      
      //........ Return Queue is Empty or not ........
       bool isEmpty(){
           return size == 0;
       }

     //.........  insert an element in Queue .......
     void enqueue(int element){

         if(size == capacity){
             cout << "Queue Full!" << endl;
             return;
         }

         data[nextIndex] = element;
         nextIndex = (nextIndex+1)%capacity;
         if(firstIndex == -1)
             firstIndex = 0;

          size++;   
     }

    

     // ............ return front element .....
     int front(){
         if(isEmpty()){
             cout << "Queue Empty! ";
             return 0;
         }
         return data[firstIndex];
     }

     //.......  delete the element from Queue .......
    int dequeue() {
		if(isEmpty()) {
			cout << "Queue Empty! " << endl;
			return 0;
		}
		int ans = data[firstIndex];
		firstIndex = (firstIndex + 1) % capacity;
		size--;
		if(size == 0) {
			firstIndex = -1;
			nextIndex = 0;
		}
		return ans;
	}
};

