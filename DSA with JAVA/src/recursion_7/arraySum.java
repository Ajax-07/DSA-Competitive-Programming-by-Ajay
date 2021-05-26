package recursion_7;

import java.util.Scanner;

public class arraySum {
	//helper function
	public static int findSum(int arr[], int i) {
		if(i>=arr.length) {
			return 0;
		}
		
		return arr[i] + findSum(arr,++i);
	}
	
	public static int findSum(int arr[]) {
		return findSum(arr, 0);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int [] arr = new int[n]; 
		for(int i=0; i<n; i++)
			arr[i] = sc.nextInt();
		
	   System.out.println(findSum(arr));
	}

}
