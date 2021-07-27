package BinarySearchTree_13;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class checkBST {
	
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
	
	public static pair<Integer, pair<Integer, Boolean>> check(BSTNode<Integer> root) {
		if(root == null) {
			pair<Integer, pair<Integer, Boolean>> p = new pair<Integer, pair<Integer, Boolean>>();
			p.first = Integer.MIN_VALUE;
			p.second = new pair<Integer,Boolean>(); 
			p.second.first = Integer.MAX_VALUE;
			p.second.second = true;
			return p;
		}
		
		pair<Integer, pair<Integer, Boolean>> ans1 = check(root.left);
		pair<Integer, pair<Integer, Boolean>> ans2 = check(root.right);
		
		pair<Integer, pair<Integer, Boolean>> ans = new pair<Integer, pair<Integer, Boolean>>();
		ans.first = Math.max(root.data, ans1.first);
		ans.second = new pair<Integer, Boolean>();
		ans.second.first = Math.min(root.data, ans2.second.first);
		ans.second.second = (ans1.first <= root.data && ans2.second.first > root.data) && (ans1.second.second && ans2.second.second);
		return ans;
		
	}

	public static boolean check2(BSTNode<Integer> root, int a, int b) {
		if(root == null)
			return true;
		if(root.data >= a && root.data < b) {
			return check2(root.left, a, root.data)&&check2(root.right, root.data, b);
		}else {
			return false;
		}           
		
	}
	
	public static void main(String[] args) {
		BSTNode<Integer> root = takeInput();
		System.out.println(check(root).second.second);
		System.out.println(check2(root, Integer.MIN_VALUE, Integer.MAX_VALUE));
	}

}

