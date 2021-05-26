package linkedList_9;

import java.util.Scanner;

public class variationLL {
	
	public static node<Integer> circularInput(){
		Scanner sc = new Scanner(System.in);
		
		node<Integer> head  = null;
		node<Integer> tail = null;
		int x = sc.nextInt();
		while(x != -1) {
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
		
		tail.next = head;
		return head;
	}
	
	public static void  printCircular(node<Integer> head) {
		
		node<Integer> temp = head;
		do {
			System.out.print(temp.data + " ");
			temp = temp.next;
		}while(temp!=head);
	}
	public static doubly<Integer> inputDoubly(){
		Scanner sc = new Scanner(System.in);
		
		doubly<Integer> head = null;
		doubly<Integer> tail = null;
		
		int x = sc.nextInt();
		while(x != -1) {
			doubly<Integer> N = new doubly<>(x);
			if(head == null) {
				head = N;
				tail = N;
			}else {
				tail.next = N;
				N.prev = tail;
				tail = N;
			}
			
			x = sc.nextInt();
		}
		
		return head;
	}
	
	public static void printDoubly(doubly<Integer> head) {
		if(head == null)
			return;
		
		doubly<Integer> temp = head;
		doubly<Integer> tail = null;
		// print forward
		while(temp != null) {
			System.out.print(temp.data + " ");
			tail = temp;
			temp = temp.next;
		}
		System.out.println();
		
		//print backward
		while(tail!= null) {
			System.out.print(tail.data + " ");
			tail = tail.prev;
		}
	}
	
	public static void main(String [] str) {
		// circular LL
		node<Integer> head = circularInput();
		printCircular(head.next.next.next);
		
		//doubly LL
		doubly<Integer> dll = inputDoubly();
		printDoubly(dll);
	}
}
