package BinarySearchTree_13;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.ArrayList;

public class RootToNodePath {
	
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
	
	public static void getPath(BSTNode<Integer> root, int nodeData, ArrayList<Integer> ans ) {
		if(root == null) {
			return;
		}
		
		if(nodeData == root.data) {
			ans.add(root.data);
			return;
		}
		
		if(nodeData < root.data) {
			getPath(root.left, nodeData, ans);
			
			if(ans.size() != 0) {
				ans.add(root.data);
				return;
			}
			return;
		}else {
			getPath(root.right, nodeData, ans);
			
			if(ans.size() != 0) {
				ans.add(root.data);
				return ;
			}
			return ;
		}
		
	}
	
	public static void main(String[] args) {
		BSTNode<Integer> root = takeInput();
		
		ArrayList<Integer> ans = new ArrayList<>();
		
		getPath(root, 7, ans);
		
		for(int i=0; i<ans.size(); i++)
			System.out.print(ans.get(i) + " ");

	}

}
