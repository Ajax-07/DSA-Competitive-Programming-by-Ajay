package binaryTree_12;
import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;

public class takeInput {
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
	
	public static void main(String args[]) {
		node<Integer> root = input();
		print(root);
		
	}
}
