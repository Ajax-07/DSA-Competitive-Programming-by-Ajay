package linkedList_9;

import java.util.Scanner;

 public class midPoint {
	 public  static node<Integer> input(){
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
	public static node<Integer> mid(node<Integer> head){
		
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
	
	
	public static void main(String[] args) {
		
		node<Integer> head = input();
		//print(head);
		System.out.println();
		System.out.println(mid(head).data);
	}

}
