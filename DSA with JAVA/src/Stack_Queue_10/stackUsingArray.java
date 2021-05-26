package Stack_Queue_10;

// Stack using Array - dynamic

public class stackUsingArray {
	private int [] arr;
	private int top;
	private int currSize;
	private int capacity;
	
	// function for resizing the stack when stack is full 
	private void resize() {
		int [] NEW = new int[capacity*2];
		for(int i=0; i<currSize; i++)
			NEW[i] = arr[i];
		
		arr = NEW;
		capacity *=2; 
	}
	
	// constructor
	public stackUsingArray() {
		arr = new int[2];
		top =-1;
		currSize = 0;
		capacity = 2;
	}
	
	// get size of stack
	public int size() {
		return currSize;
	}
	
	// check if stack is empty
	public boolean isEmpty() {
		return currSize == 0;
	}
	
	// insert or push an element in stack
	public void push(int data) {
		
		if(currSize == capacity) {
			resize();
		}
		top++;
		arr[top] = data;
		currSize++;
	}
	
	// delete or pop an element from stack
	public int pop() throws StackEmptyException {
		if(isEmpty()) {
			StackEmptyException e = new StackEmptyException();
			throw e;
		}
		int topElement = arr[top];
		arr[top] = 0;
		top--;
		currSize--;
		return topElement;
	}
	
	// get the top element from stack
	public int top() throws StackEmptyException {
		if(isEmpty()) {
			StackEmptyException e = new StackEmptyException();
			throw e;
		}
		
		return arr[top];
	}
}

