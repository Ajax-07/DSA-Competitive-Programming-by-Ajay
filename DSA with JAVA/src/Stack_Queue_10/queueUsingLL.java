package Stack_Queue_10;

// Queue using LinkedList - Dynamically
public class queueUsingLL {
	private node head;
	private node tail;
	private int curSize;
	
	// constructor
	public queueUsingLL() {
		head = null;
		tail = null;
		curSize = 0;
	}
	
	// get size of queue
	public int size() {
		return curSize;
	}
	
	// check if queue is empty
	public boolean isEmpty() {
		return curSize==0;
	}
	
	// push an element in queue
	public void enqueue(int data) {
		
		node newNode = new node(data);
		if(head == null) {
			head = newNode;
			tail = newNode;
		}else {
			tail.next = newNode;
			tail = newNode;
		}
		
		curSize++;
	}
	
	// pop the front element from queue
	public int dequeue() throws QueueEmptyException {
		
		if(head == null) {
			throw new QueueEmptyException();
		}
		
		node temp = head;
		head = head.next;
		temp.next = null;
		curSize--;
		return temp.data;
	}
	
	// get front element from queue
	public int front() throws QueueEmptyException {
		if(head == null) {
			throw new QueueEmptyException();
		}
		
		return head.data;
		
	}
}

