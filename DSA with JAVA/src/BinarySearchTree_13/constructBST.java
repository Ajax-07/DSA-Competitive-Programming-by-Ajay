package BinarySearchTree_13;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class constructBST {
	
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
	
	public static BSTNode<Integer> makeBST(int arr[], int l, int r){
		if(l>r) {
			return null;
		}
		
		int mid = l+(r-l)/2;
		BSTNode<Integer> root = new BSTNode<>(arr[mid]);
		
		root.left = makeBST(arr, l, mid-1);
		root.right = makeBST(arr, mid+1, r);
		
		return root;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i=0; i< n; i++) {
			arr[i] = sc.nextInt();
		}
		
		BSTNode<Integer> root = makeBST(arr , 0 , n-1);
		print(root);

	}

}
