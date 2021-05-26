package Tree_11;


import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;

public class nextLargerNode {

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
	
	static int res=-1;
	public static void nextLarger(treeNode<Integer> root, int n) {
		if(root == null)
			return;
		
		if(root.data>n )
			if(res  == -1 || res >root.data)
			res = root.data;
		
		for(int i=0; i<root.children.size(); i++) {
			nextLarger(root.children.get(i), n);
		}
	
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		treeNode<Integer> root = takeInput();
		int n = sc.nextInt();
		
		nextLarger(root, n);
		System.out.println(res);
		
	}

}
