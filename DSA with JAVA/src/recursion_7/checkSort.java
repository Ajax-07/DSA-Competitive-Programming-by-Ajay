package recursion_7;

import java.util.Scanner;

public class checkSort {
	
	//helper function
	public static boolean isSorted(int arr[], int i) {
		if(i>=arr.length-1 ) {
			return true;
		}
		
		if(arr[i]>arr[i+1])
			return false;
		
		return isSorted(arr,++i);
	}
	
	public static boolean isSorted(int arr[]) {
		return isSorted(arr,0);
		
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int [] arr = new int[n];
		
		for(int i=0; i<n; i++)
			arr[i] = sc.nextInt();
		
		
		if(isSorted(arr))
			System.out.println("yes");
		else
			System.out.println("no");

	}

}
