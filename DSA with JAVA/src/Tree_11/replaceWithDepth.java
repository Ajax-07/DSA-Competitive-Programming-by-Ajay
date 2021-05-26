package Tree_11;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class replaceWithDepth {

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
	
	
	public static treeNode<Integer>  replace(treeNode<Integer> root, int depth) {
		if(root == null)
			return null;
		
		root.data = depth;
		for(int i=0; i<root.children.size(); i++) {
			replace(root.children.get(i), depth+1);
		}
		return root;
	}
	
	public static void print(treeNode<Integer> root) {
		if(root == null)
			return;
		
		System.out.println();
		System.out.print(root.data + " : ");
		
		for(int i=0; i<root.children.size(); i++)
			System.out.print(root.children.get(i).data + " ");

		
		for(int i=0; i<root.children.size(); i++)
			print(root.children.get(i));
		
	}
	
	public static void main(String[] args) {
		
		treeNode<Integer> root = takeInput();
		
		print(replace(root , 0));
		
	}

}
