package linkedList_9;

import java.util.Scanner;

public class insertNode {
	
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
    
	// Insert a node at given position
	public static node<Integer> insert(node<Integer> head, int key, int pos){
		node<Integer> temp = head;
		
		if(pos == 1) {
			node<Integer> N = new node<>(key);
			N.next = head;
			head = N;
			return head;
		}
		
		int i=1;
		while(i<pos-1) {
			temp = temp.next;
			i++;
		}
		
		node<Integer> N = new node<>(key);
		N.next = temp.next;
		temp.next = N;
		
		return head;
	}
	
	// Delete a node from given position
	public static node<Integer> delete(node<Integer> head, int pos){
		if(pos == 1) {
			head = head.next;
		}
		
		node<Integer> temp = head;
		
		int i=1;
		while(i<pos-1 && temp.next != null) {
			temp = temp.next;
			i++;
		}
		
		temp.next = temp.next.next;
		
		return head;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		node<Integer> head = input();
		print(head);
		
		int key=sc.nextInt();
		int pos=sc.nextInt();
		
		node<Integer> res = insert(head,key,pos);
		print(res);
		
		System.out.println();
		res = delete(res,pos);
		print(res);
	}

}
