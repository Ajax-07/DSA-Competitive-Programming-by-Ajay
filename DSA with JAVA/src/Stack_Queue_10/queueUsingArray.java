package Stack_Queue_10;

// Queue using Array - Dynamically
public class queueUsingArray {
	private int arr[];
	private int frontIndex;
	private int lastIndex;
	private int curSize;
	private int capacity;
	
	// resize the array
	private void resize() {
		int temp[] = new int[capacity*2];
		for(int i=0; i<capacity; i++) {
			temp[i] = arr[(i+frontIndex)%curSize];
		}
		frontIndex = 0;
		lastIndex = capacity-1;
		arr = temp;
		capacity *= 2;
	}
	
	// constructor
	public queueUsingArray() {
		arr = new int[2];
		frontIndex = -1;
		lastIndex = -1;
		curSize = 0;
		capacity = 2;
	}
	
	// get size of queue
	public int size() {
		return curSize;
	}
	
	// check if queue is empty
	public boolean isEmpty() {
		 return curSize == 0;
	}
	
	// push element in queue
	public void enqueue(int data) {
		
		if(curSize == capacity ) {
			resize();
		}
		
		if(frontIndex == -1)
			frontIndex = 0;
		
		lastIndex++;
		arr[lastIndex%capacity] = data;
		curSize++;
	}
	
	// pop element from queue
	public int dequeue() throws QueueEmptyException{
		if(isEmpty()) {
			QueueEmptyException e = new QueueEmptyException();
			throw e;
		}
		int temp = arr[frontIndex];
		arr[frontIndex] = 0;
		frontIndex = (frontIndex+1)%capacity;
		curSize--;
		return temp;
	}
	
	// get element from queue
	public int front() throws QueueEmptyException {
		if(isEmpty()) {
			QueueEmptyException e = new QueueEmptyException();
			throw e;
		}
		return arr[frontIndex];
	}
}
