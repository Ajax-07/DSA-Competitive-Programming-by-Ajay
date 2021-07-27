package binaryTree_12;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class makeTree {
	
	public static node<Integer> makeBinaryTree(int preOrder[], int inOrder[], int i, int j, int m, int n) {
		if(i>j && m>n)
			return null;
		
		int x = preOrder[i];
		int k=m;
		while(k<=n) {
			if(inOrder[k] == x) {
				break;
			}
			k++;
		}
		
		 node<Integer> root = new node<>(x);
		 
		 root.left = makeBinaryTree(preOrder, inOrder, i+1, i+(k-m), m, k-1);
		 root.right = makeBinaryTree(preOrder, inOrder, i+(k-m)+1, j, k+1, n);
		 return root;
		
			
	}
	
	static void print(node<Integer> root) {
		if(root == null)
			return;
		
		Queue<node<Integer>> q = new LinkedList<>();
		q.add(root);
		while(!q.isEmpty()) {
			node<Integer> front = q.poll();
			System.out.print(front.data + " ");
			if(front.left != null) {
				q.add(front.left);
			}
			if(front.right != null) {
				q.add(front.right);
			}
		}
		
	}
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int preOrder[] = new int[n];
		for(int i=0; i<n; i++) {
			preOrder[i] = sc.nextInt();
		}
		int inOrder[] = new int[n];
		for(int i=0; i<n; i++) {
			inOrder[i] = sc.nextInt();
		}
		
		print(makeBinaryTree(preOrder, inOrder, 0, n-1, 0, n-1));
	}

}


/*
 * 
 * input
 * 
 * n           12
   preOrder    1 2 3 4 15 5 6 7 8 10 9 12
   postOrder   4 15 3 2 5 1 6 10 8 7 9 12
   
   output
   
               1 2 6 3 5 7 4 8 9 15 10 12 
 * 
 * 
 * 
 * */
