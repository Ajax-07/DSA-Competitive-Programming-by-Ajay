package Tree_11;

import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;


public class takeinput {

	//static Scanner sc = new  Scanner(System.in);            // or pass scanner in input
	
	//taking input level wise
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
	
	/*
	public static treeNode<Integer> takeInput(Scanner sc){
		
		System.out.println("Enter Node Data : ");
		int data = sc.nextInt();
		
		treeNode<Integer> root = new treeNode<Integer>(data);
		
		System.out.println("Enter No. of Child for " + data + " : ");
		
		int n = sc.nextInt();
		
		for(int i=0; i<n; i++) {
			treeNode<Integer> New = takeInput(sc);
			root.children.add(New);
		}
		return root;
		
	}
	
	*/
	
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
		//Scanner sc = new Scanner(System.in);
		
		//treeNode<Integer> root = takeInput(sc);
		
		treeNode<Integer> root = takeInput();
		
		print(root);

	}

}
