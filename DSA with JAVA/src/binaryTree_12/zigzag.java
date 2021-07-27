package binaryTree_12;
import java.util.Scanner; 
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;
public class zigzag {
	
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
	
	
	
	public static ArrayList<Integer> zigZagTraversal(node<Integer> root)
	{
	    //Add your code here.
	    if(root == null){
	        ArrayList<Integer> a = new ArrayList<>();
	        return a;
	    }
	    
	    ArrayList<Integer> ans = new ArrayList<>();
	    Stack<node<Integer>> s1 = new Stack<>();
	    Stack<node<Integer>> s2 = new Stack<>();
	    s1.add(root);
	    while(!s1.empty() || !s2.empty() ){
	        while(!s1.empty()){
	            node<Integer> t = s1.pop();
	            ans.add(t.data);
	            if(t.left!=null)
	               s2.add(t.left);
	           if(t.right != null)    
	               s2.add(t.right);
	        }
	        while(!s2.empty()){
	           node<Integer> t = s2.pop();
	            ans.add(t.data);
	            if(t.right!=null)
	               s1.add(t.right);
	           if(t.left!=null)    
	               s1.add(t.left);
	        }
	    }
	    
	    return ans;
	    
	}
	
	public static void main(String str[]) {
		node<Integer> root = input();
		
		ArrayList<Integer> ans = zigZagTraversal(root);
		
		for(int i=0; i<ans.size(); i++) {
			System.out.print(ans.get(i) + " ");
		}
	}
}
