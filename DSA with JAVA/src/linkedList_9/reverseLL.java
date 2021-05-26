package linkedList_9;

import java.util.Scanner;

public class reverseLL {
	public static node<Integer> input(){
		Scanner sc = new Scanner(System.in);
		
		node<Integer> head=null;
		node<Integer> tail=null;
		
		int x = sc.nextInt();
		while(x!=-1) {
			node<Integer> N = new node<>(x);
			
			if(head == null) {
				head = N;
				tail = N;
			}else {
				tail.next = N;
				tail = N;
			}
			
			x = sc.nextInt();
		}
		
		return head;
	}
	
	public static void print(node<Integer> head) {
		node<Integer> temp = head;
		
		while(temp != null) {
			System.out.print(temp.data + " ");
			temp = temp.next;
		}
	}
	
	// recursive O(N^2)
	public static node<Integer> rev(node<Integer> head) {
		if(head == null || head.next == null)
			 return head;
		node<Integer> smallAns = rev(head.next);
		node<Integer> temp = smallAns;
		
		while(temp.next != null) {
			temp = temp.next;
		}
		
		temp.next = head;
		head.next = null;
		
		return smallAns;
	}
	
	//recursive O(N)
	public static doubleNode rev2(node<Integer> h){
		if(h == null || h.next == null) {
			doubleNode ans = new doubleNode();
			ans.head = h;
			ans.tail = h;
			return ans;
		}
		
		doubleNode smallAns = rev2(h.next);
		
		smallAns.tail.next = h;
		h.next = null;
		
		doubleNode res = new doubleNode();
		res.head = smallAns.head;
		res.tail = h;
		return res;
	}
	
	//recursive O(N) another approach 
	public static node<Integer> rev3(node<Integer> head) {
		if(head == null || head.next == null)
			 return head;
		
		node<Integer> revTail = head.next;
		node<Integer> smallAns = rev(head.next);
		
		
		revTail.next = head;
		head.next = null;
		
		return smallAns;
	}
	// iterative
	public static node<Integer> rev4(node<Integer> head){
		node<Integer> prev = null;
		node<Integer> curr = null;
		node<Integer> temp = head;
		
		while(temp != null) {
			curr = temp;
			temp = temp.next;
			curr.next = prev;
			prev = curr;
		}
		
		return curr;
	}
	
	public static void main(String [] args) {
		node<Integer> res = input();
		
//		print(rev(res));
//		print(rev2(res).head);
//		print(rev3(res));
		print(rev4(res));
	}
}
