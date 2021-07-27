package prioritry_Queue_15;

import java.util.ArrayList;
import java.util.PriorityQueue;
import java.util.Scanner;

public class kLargestElemet {
	public static ArrayList<Integer> kLargest(int arr[], int k) {
		
		PriorityQueue<Integer> pq = new PriorityQueue<>();
		
		int i=0;
		while(i<arr.length) {
			
			if(i<k)
				pq.add(arr[i]);
			else{
				int temp = pq.peek();
				if(arr[i] > temp) {
					pq.remove();
					pq.add(arr[i]);
				}
			}
			i++;
		}
		
		ArrayList<Integer> ans = new ArrayList<>();
		
		while(!pq.isEmpty()) {
			
			ans.add(pq.remove());
		}
		
		return ans;
		
	}

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i=0; i<n; i++)
			arr[i] = sc.nextInt();
		
		int k = sc.nextInt();
		
		
		ArrayList<Integer> ans = kLargest(arr, k);
		for(int i : ans)
			System.out.print(i + " ");
		

	}

}
