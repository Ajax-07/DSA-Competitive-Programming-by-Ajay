package BinarySearchTree_13;

import java.util.Scanner;
import java.util.Queue;
import java.util.LinkedList;

public class searchInBST {
	
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
	
	public static void print(BSTNode<Integer> root) {
		if(root == null) {
			return;
		}
		
		Queue<BSTNode<Integer>> q = new LinkedList<>();
		q.add(root);
		
		while(!q.isEmpty()) {
			BSTNode<Integer> front = q.poll();
			
			System.out.print(front.data + " ");
			
			if(front.left != null) {
				q.add(front.left);
			}
			if(front.right != null) {
				q.add(front.right);
			}
		}
		
	}
	
	public static boolean search(BSTNode<Integer> root, int k) {
		if(root == null)
			return false;
		
		if(root.data == k)
			 return true;
		if(k<root.data) {
			return search(root.left, k);
		}else {
			return search(root.right, k);
		}
	}

	public static void main(String[] args) {
		BSTNode<Integer> root = takeInput();
		print(root);
		
		System.out.println(search(root, 16));
	}

}
