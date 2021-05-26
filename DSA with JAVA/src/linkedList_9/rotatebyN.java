package linkedList_9;

import java.util.Scanner;

public class rotatebyN {
	
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
	
	public static node<Integer> rotate(node<Integer> head, int n){
		node<Integer> temp = head;
		node<Integer> temp2 = head;
		
		int size=0;
		while(temp!=null) {
			temp = temp.next;
			size++;
		}
		
		if(size==n)
			return head;
		
		int i=0;
		temp = head;
		while(i<size-n-1) {
			temp = temp.next;
			i++;
		}
		
		head = temp.next;
		temp.next = null;
		
		temp=head;
		while(temp.next!=null) {
			temp = temp.next;
		}
		
		temp.next = temp2;
		
		return head;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		node<Integer> head = input();
		print(head);
		System.out.println();
		
		int n = sc.nextInt();
		head = rotate(head, n);
		
		print(head);

	}

}
