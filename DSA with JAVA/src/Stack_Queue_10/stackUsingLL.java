package Stack_Queue_10;

// stack using Linked List - Dynamic

public class stackUsingLL {
	private node head;
	private int curSize;
	
	// constructor
	public stackUsingLL() {
		head = null;
		curSize = 0;
	}
	
	// get size;
	public int size() {
		return curSize;
	}
	
	// check if empty
	public boolean isEmpty() {
		return curSize == 0;
	}
	
	// push element
	public void push(int data) {
		node newNode = new node(data);
		if(head == null) {
			head = newNode;
		}else {
			newNode.next = head;
			head = newNode;	
		}
		
		curSize++;
	}
	
	// delete element
	public int pop() throws StackEmptyException {
		if(isEmpty()) {
			StackEmptyException e = new StackEmptyException();
			throw e;
		}
		node temp = head;
		head = head.next;
		temp.next = null;
		curSize--;
		return temp.data;
		
	}
	
	// get top element
	public int top() throws StackEmptyException{
		if(isEmpty()) {
			StackEmptyException e = new StackEmptyException();
			throw e;
		}
		
		return head.data;
	}
}



