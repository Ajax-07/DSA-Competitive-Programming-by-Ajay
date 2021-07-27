package prioritry_Queue_15;

import java.util.PriorityQueue;
import java.util.Scanner;

public class kSortedArray {
	
	public static void kSort(int arr[], int k) {
		PriorityQueue<Integer> pq = new PriorityQueue<>();
		for(int i=0; i<k; i++)
			pq.add(arr[i]);
		
		int i=k;
		while(i<arr.length) {
			arr[i-k] = pq.remove();
			pq.add(arr[i]);
			i++;
		}
	    
		for(int j=arr.length-k; j<arr.length; j++) {
			arr[j] = pq.remove();
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i=0; i<n; i++)
			arr[i] = sc.nextInt();
		
		int k = sc.nextInt();
		
		kSort(arr, k);
		for(int i: arr)
			System.out.print(i + " ");

	}

}
