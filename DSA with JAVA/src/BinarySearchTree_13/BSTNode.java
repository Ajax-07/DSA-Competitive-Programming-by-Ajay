package BinarySearchTree_13;

public class BSTNode<T> {
	public T data;
	public BSTNode<T> left;
	public BSTNode<T> right;
	
	public BSTNode(T data) {
		this.data = data;
		left = null;
		right = null;
	}
}
