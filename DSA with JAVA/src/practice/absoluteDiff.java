package practice;

import java.util.Scanner;

public class absoluteDiff {
	
	public static int solve(int arr[], int n, int num, int diff) {
		int count=0;
		
		for(int i=0; i<n; i++)
			if(Math.abs(arr[i]-num) <= 1)
				count++;
		
		return count;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int arr[] = new int[n];
		
		for(int i=0; i<n; i++)
			 arr[i] = sc.nextInt();
		int num = sc.nextInt();
		int diff = sc.nextInt();
		
		System.out.println(solve(arr, n, num, diff));
	}
}
