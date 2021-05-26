package linkedList_9;

import java.util.Scanner;

public class mergeTwoLL {
	
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
	
	// without using extra space
	public static node<Integer> merge2(node<Integer> h1, node<Integer> h2){
		node<Integer> head = null;

		node<Integer> temp  = null;
		node<Integer> t1  = h1;
		node<Integer> t2  = h2;
		
		while(t1 != null && t2 != null) {
			if(t1.data<=t2.data) {
				if(head == null) {
					head = t1;
					temp = t1;
				}else {
					temp.next = t1;
					temp = t1;
				}
				
				t1 = t1.next;
				
			}else {
				if(head == null) {
					head = t2;
					temp = t2;
				}else {
					temp.next = t2;
					temp = t2;
				}
				t2 = t2.next;
			}
		}
		
		while(t1 != null) {
			temp.next = t1;
			temp = t1;
			t1 = t1.next;
		}
		
		while(t2 != null) {
			temp.next = t2;
			temp = t2;
			t2 = t2.next;
		}
       return head;
	}
	
	// using extra space
	public static node<Integer> merge1(node<Integer> h1, node<Integer> h2){
		
		node<Integer>head = null;

		node<Integer> temp  = null;
		node<Integer> t1  = h1;
		node<Integer> t2  = h2;
		
		
		while(t1 != null && t2 != null) {
			if(t1.data <= t2.data) {
				node<Integer> N = new node<>(t1.data);
				if(head == null) {
					head = N;
					temp = N;
				}
				else {
					temp.next = N;
					temp = N;
				}
		     t1 = t1.next;		
			}else {
				node<Integer> N = new node<>(t2.data);
				if(head == null) {
					head = N;
					temp = N;
				}
				else {
					temp.next = N;
					temp = N;
				}
				t2 = t2.next;
			}
		}
		
		
		while(t1 != null) {
			node<Integer> N = new node<>(t1.data);
			temp.next = N;
			temp = N;
			t1 = t1.next;
		}
		
		while(t2 != null) {
			node<Integer> N = new node<>(t2.data);
			temp.next = N;
			temp = N;
			
			t2 = t2.next;
		}
		
		return head;
	}

	public static void main(String[] args) {
		node<Integer> h1 = input();
		node<Integer> h2 = input();
		
		
//    	node<Integer> res = merge1(h1,h2);
	    node<Integer> res = merge2(h1,h2);
		
		print(res);

	}

}
