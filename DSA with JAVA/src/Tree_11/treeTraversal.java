package Tree_11;

import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;

public class treeTraversal {
	
	public static treeNode<Integer> takeInput(){
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter Root : ");
		int data = sc.nextInt();
		treeNode<Integer> root = new treeNode<Integer>(data);
		
		Queue<treeNode<Integer>> pending = new LinkedList<>();
		pending.add(root);
		
		while(!pending.isEmpty()) {
			treeNode<Integer> front = pending.poll();
			System.out.println("Enter no. of child for " + front.data + " : ");
			int n = sc.nextInt();
			
			for(int i=0; i<n; i++) {
				System.out.println("Enter " + (i+1) + " child");
				int childData = sc.nextInt();
				treeNode<Integer> child = new treeNode<Integer>(childData);
				front.children.add(child);
				pending.add(child);
			}
		}
		return root;
	}
	
	public static void levelOrder(treeNode<Integer> root) {
		if(root == null)
			return;
		
		Queue<treeNode<Integer>> temp = new LinkedList<>();
		temp.add(root);
		
		while(!temp.isEmpty()) {
			treeNode<Integer> front = temp.poll();
			System.out.print(front.data + " ");
			for(int i=0; i<front.children.size(); i++)
				temp.add(front.children.get(i));
		}
	}
	
	public static void preOrder(treeNode<Integer> root) {
		if(root == null)
			return;
		System.out.print(root.data + " ");
		
		for(int i=0; i<root.children.size(); i++) {
			preOrder(root.children.get(i));
		}
	}
	
	public static void postOrder(treeNode<Integer> root) {
		if(root == null)
			return;
		
		for(int i=0; i<root.children.size(); i++) {
			postOrder(root.children.get(i));
		}
		
		System.out.print(root.data + " ");
	}
	
	
	public static void main(String[] args) {
		treeNode<Integer> root = takeInput();  // 10 3 20 30 50 0 2 60 70 1 80 0 0 1 90 2 30 50 1 20 0 0
		
		// print level order 
		levelOrder(root);       // 10 20 30 50 60 70 80 90 30 50 20 
		
		System.out.println();
		// print pre-order
		preOrder(root);       // 10 20 30 60 70 50 80 90 30 20 50
		
		System.out.println();
		// print post-order
		postOrder(root);       // 20 60 70 30 20 30 50 90 80 50 10 
		
	}

}
