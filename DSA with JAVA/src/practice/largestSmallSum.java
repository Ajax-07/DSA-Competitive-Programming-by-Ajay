package practice;

import java.util.Scanner;

public class largestSmallSum {
	
	public static int solve(int arr[], int n) {
		int ans=0;
		
		int ol1, ol2;
		int el1, el2;
		
		ol1 = ol2 = el1 = el2 = Integer.MIN_VALUE;
		
		for(int i=0; i<n; i++) {
			if((i+1)%2 == 0) {
				if(arr[i] > ol1) {
					ol2 = ol1;
					ol1 = arr[i];
				}else
					ol2 = Math.max(ol2, arr[i]);
			}else {
				if(arr[i] > el1) {
					el2 = el1;
					el1 = arr[i];
				}else
					el2 = Math.max(el2, arr[i]);
			}
		}
		
		return ol2+el2;
	}
	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int arr[] = new int[n];
		
		for(int i=0; i<n; i++)
			 arr[i] = sc.nextInt();
		
		
		System.out.println(solve(arr, n));
	}

}
