package binaryTree_12;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.ArrayList;

public class rootToNodepath {
	
	public static node<Integer> input() {
		Scanner sc = new Scanner(System.in);
		
		Queue<node<Integer>> q = new LinkedList<>();
		
		System.out.println("Enter Root Data :");
		
		int x = sc.nextInt();
		if(x == -1)
			return null;
		
		node<Integer> root = new node<Integer>(x);
		q.add(root);
		while(!q.isEmpty()) {
			node<Integer> front = q.poll();
			
			System.out.println("Enter left child of " + front.data + ": ");
			int l = sc.nextInt();
			System.out.println("Enter right child of " + front.data + ": "  );
			int r = sc.nextInt();
			
			if(l != -1) {
				node<Integer> n1 = new node<Integer>(l);
				front.left = n1;
				q.add(n1);
			}
			if(r != -1) {
				node<Integer> n2 = new node<Integer>(r);
				front.right = n2;
				q.add(n2);
			}
			
		}
		
		return root;
	}
	
	public static void getPath(node<Integer> root, int nodeData, ArrayList<Integer> ans){
		if(root == null) {
			return;
		}
		
		getPath(root.left, nodeData, ans);
		
		if(ans.size() == 0) {
			getPath(root.right, nodeData, ans);
			
			if(ans.size() == 0) {
				if(root.data == nodeData) {
					ans.add(root.data);
				}else return;
			}else{
				ans.add(root.data);
				return;
			}
		}else {
			ans.add(root.data);
			return;
		}
		
		
	}

	public static void main(String[] args) {
		
		node<Integer> root = input();
		
		 ArrayList<Integer> ans = new ArrayList<>();
		 getPath(root, 2, ans);
		 
		 for(int i=0; i<ans.size(); i++)
			 System.out.print(ans.get(i) + " ");
	}

}
