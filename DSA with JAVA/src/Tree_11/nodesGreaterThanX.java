package Tree_11;

import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;

public class nodesGreaterThanX {

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
	
	public static int countNodeGreaterThanX(treeNode<Integer> root, int x) {
		if(root == null)
			return 0 ;
		
		int count;
		
		if(root.data > x)
			count = 1;
		else count = 0;
		
		for(int i=0; i<root.children.size(); i++) {
			count += countNodeGreaterThanX(root.children.get(i), x);
		}
		
		return count;
	}
	
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		treeNode<Integer> root = takeInput();
		int x = sc.nextInt();
		
		System.out.println(countNodeGreaterThanX(root, x));
	}

}
