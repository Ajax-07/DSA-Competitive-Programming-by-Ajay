package practice;

import java.util.Scanner;

public class rateHouse {
	
	public static int solve(int arr[], int n, int r, int unit) {
		
		int amount = r*unit;
		
		int sum=0;
		
		for(int i=0; i<n; i++) {
			sum += arr[i];
			
			if(sum >= amount)
				return i+1;
		}
		
		return -1;
			
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int r = sc.nextInt();
		int unit = sc.nextInt();
		int n = sc.nextInt();
		
		int arr[] = new int[n];
		
		for(int i=0; i<n; i++)
			 arr[i] = sc.nextInt();
		
		System.out.println(solve(arr, n, r, unit));
	}

}
