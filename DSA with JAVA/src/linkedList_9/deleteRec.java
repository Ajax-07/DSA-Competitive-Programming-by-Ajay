package linkedList_9;

import java.util.Scanner;

public class deleteRec {


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
	
	public static node<Integer> delete(node<Integer> head, int pos){
		if(pos == 0) {
			head = head.next;
			return head;
		}
		if(head == null)
			return head;
		
		head.next = delete(head.next,pos-1);
		return head;
  	}
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		node<Integer> head = input();
		int pos = s.nextInt();
		print(delete(head, pos));
	}

}
