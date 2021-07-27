package BinarySearchTree_13;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class printInRange {

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
	
	public static void printRange(BSTNode<Integer> root, int a, int b) {
		if(root == null)
			return ;
		 if(root.data > a)
				printRange(root.left, a, b);
		
		if(root.data >= a && root.data <= b)
			System.out.print(root.data + " ");
		
		if(root.data < b)
			printRange(root.right, a, b);
	}

	public static void main(String[] args) {
		BSTNode<Integer> root = takeInput();
		printRange(root, 10 , 60);
	}

}
