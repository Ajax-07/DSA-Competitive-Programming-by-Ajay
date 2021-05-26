package linkedList_9;

public class doubly<T> {
	T data;
	doubly<T> prev;
	doubly<T> next;
	
	public doubly(T data) {
		this.data = data;
		prev = null;
		next = null;
	}
}
