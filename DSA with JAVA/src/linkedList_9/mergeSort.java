package linkedList_9;

import java.util.Scanner;

public class mergeSort {
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
	public static node<Integer> merge(node<Integer> h1, node<Integer> h2){
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

	public static node<Integer> midPoint(node<Integer> head){
		
		node<Integer> temp = head;
		
		int n=0;
		while(temp!=null) {
			temp = temp.next;
			n++;
		}
		
		node<Integer> slow = head;
		node<Integer> fast = head;
		if(n%2 == 0) {
			while(fast.next.next != null) {
				slow = slow.next;
				fast = fast.next.next;
			}
		}else {
			while(fast.next != null) {
				slow = slow.next;
				fast = fast.next.next;
			}
		}
		
		
		return slow;
		
	}
	
	
	public static node<Integer> sort(node<Integer> head) {
		if(head == null || head.next == null)
			return head;
		
		node<Integer> mid = midPoint(head);
		node<Integer> midNext = mid.next;
		
		mid.next = null;
		node<Integer> h1 = sort(head);
		node<Integer> h2 = sort(midNext);
		
		node<Integer> res = merge(h1, h2);
		return res;
	}
	public static void main(String[] args) {
		node<Integer> head = input();
		
		
		node<Integer> res = sort(head);
		
		print(res);

	}

}
