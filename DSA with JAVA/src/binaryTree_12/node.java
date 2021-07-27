package binaryTree_12;

public class node<T> {
	public T data;
	public node<T> left;
	public node<T> right;
	
	public node(T data) {
		this.data = data;
		left = right = null;          
	}
}
