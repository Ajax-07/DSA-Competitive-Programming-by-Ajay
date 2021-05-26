package linkedList_9;

import java.util.Scanner;

public class insertRec {
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
	
	public static node<Integer> insert(node<Integer> head, int pos, int key){
		if(pos == 0) {
			node<Integer> N = new node(key);
			N.next = head;
			return N;
		}
		if(head == null)
			return head;
		
		head.next = insert(head.next, pos-1,key);
		return head;
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		node<Integer> head = input();
		int key = sc.nextInt();
		int pos = sc.nextInt();
		
		print(insert(head,pos, key));
		
	}

}
