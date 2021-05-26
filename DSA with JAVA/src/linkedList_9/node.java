package linkedList_9;

//public class node {
//	public int data;
//	node next;
//	
//    public node(int data) {
//    	this.data = data;
//    	next = null;
//    }
//    
//}



public class node<T> {
	public T data;
	public node<T> next;
	
    public node(T data) {
    	this.data = data;
    	next = null;
    }
    
}
