package prioritry_Queue_15;

import java.util.PriorityQueue;

public class inbuildPriorityQueue {
	public static void main(String [] args) {
		int arr[] = {2,6,3,8,0,9,1};
		PriorityQueue<Integer> pq = new PriorityQueue<>();
		for(int i=0; i<arr.length; i++) {
			pq.add(arr[i]);
		}
		
		System.out.println(pq.size());
		System.out.println(pq.peek());
		System.out.println(pq.element());
		
		pq.remove();
		pq.remove();
		pq.remove();
		
		System.out.println(pq.peek());
		System.out.println(pq.remove());
		System.out.println(pq.peek());
		System.out.println(pq.size());
		
	}
}
