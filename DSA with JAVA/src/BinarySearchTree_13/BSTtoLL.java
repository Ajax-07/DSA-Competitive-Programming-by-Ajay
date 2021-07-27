package BinarySearchTree_13;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class BSTtoLL {
	public static BSTNode<Integer> takeInput(){
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter root Data : ");
		
		int data = sc.nextInt();
		BSTNode<Integer> root = new BSTNode<>(data);
		Queue<BSTNode<Integer>> q = new LinkedList<>();
		q.add(root);
		
		while(!q.isEmpty()) {
			BSTNode<Integer> front = q.poll();
			
			System.out.print("\nEnter left child for " + front.data + " : ");
			int left = sc.nextInt();
			
			if(left!=-1) {
				BSTNode<Integer> leftChild = new BSTNode<>(left);
				q.add(leftChild);
				front.left = leftChild;
			}
			
			System.out.print("\nEnter right child for " + front.data + " : ");
			int right = sc.nextInt();
			
			if(right!=-1) {
				BSTNode<Integer> rightChild = new BSTNode<>(right);
				q.add(rightChild);
				front.right = rightChild;
			}
		}
		return root;
		
	}
	
	
	public static pair<Node<Integer> , Node<Integer>> helper(BSTNode<Integer> root){
		if(root == null) {
			pair<Node<Integer> , Node<Integer>> p = new pair<>();
			p.first = null;
			p.second = null;
			return p;
		}
		
		pair<Node<Integer> , Node<Integer>> left = helper(root.left);
		
	    Node<Integer> head, tail;
	    Node<Integer> node = new Node<>(root.data);
	    
	    
	    if(left.first != null) {
	    	head = left.first;
	    	left.second.next = node;
	    }else {
	    	head = node;
	    }
	    
	    pair<Node<Integer> , Node<Integer>> right = helper(root.right);
	    
	    if(right.first != null) {
	    	node.next = right.first;
	    	tail = right.second;
	    }else {
	    	tail = node;
	    }
	    
	    pair<Node<Integer> , Node<Integer>> ans = new pair<>();
	    ans.first = head;
	    ans.second = tail;
	    
	    return ans;
	    
		
	}

		public static Node<Integer> LL(BSTNode<Integer> root){
		return helper(root).first;
	}

	public static void main(String[] args) {
		BSTNode<Integer> root = takeInput();
		
		Node<Integer> head = LL(root);
		
		while(head!=null) {
			System.out.print(head.data+" ");
			head = head.next;
		}
	}

}

class Node<T>{
	public T data;
	public Node<T> next;
	
	public Node(T data) {
		this.data = data;
		next = null;
	}
}

