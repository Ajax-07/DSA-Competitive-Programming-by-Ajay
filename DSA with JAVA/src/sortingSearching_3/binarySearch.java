package sortingSearching_3;

import java.util.Scanner;

public class binarySearch {
	
	public static boolean search(int arr[] , int k) {
		
		int s=0;
		int e=arr.length-1;
		
		while(s<=e) {
			int mid = (s+e)/2;
			if(arr[mid] == k)
				return true;
			else if(arr[mid] < k) 
				s = mid+1;
			else
				e = mid-1;
		}
		
		return false;
		
	}
	
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int arr[] = new int[n];                    //  array should be sorted
		for(int i=0; i<n; i++)
			 arr[i] = sc.nextInt();
		
		int k = sc.nextInt();
		
		if(search(arr,k))
			System.out.println("Yes! present");
		else
			System.out.println("Not Presnt!");
	}
}
