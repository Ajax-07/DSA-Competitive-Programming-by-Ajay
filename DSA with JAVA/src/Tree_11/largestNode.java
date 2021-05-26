package Tree_11;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class largestNode {
	
	// take input level wise
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
	
	public static int largestNodeData(treeNode<Integer> root) {
		if(root == null)
			return -1;
		
		int maxNode=root.data;
		
		for(int i=0; i<root.children.size(); i++) {
		 int temp = largestNodeData(root.children.get(i));
		 maxNode = Math.max(maxNode, temp);
		}
		
		return maxNode;
	}

	public static void main(String[] args) {
		treeNode<Integer> root = takeInput();
		
		System.out.println(largestNodeData(root));

	}

}
