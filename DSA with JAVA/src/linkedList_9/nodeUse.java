package linkedList_9;

public class nodeUse {
	public static void main(String [] args) {
		node<Integer> head = null;
		
		node<Integer> temp = null;
		
		int i=0;
		while(i<6) {
			node<Integer> N = new node<>(10+i);
			if(head == null) {
				head = N;
				temp = N;
			}else {
				temp.next = N;
				temp = N;
			}
			i++;
		}
		
		temp=head;
		while(temp!=null) {
			System.out.print(temp.data + " ");
			temp = temp.next;
		}
	}
}
