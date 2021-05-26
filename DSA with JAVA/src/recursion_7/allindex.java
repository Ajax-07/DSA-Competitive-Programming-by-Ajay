package recursion_7;

import java.util.Scanner;

public class allindex {
	
	//helper
	public static void allIndex(int arr[], int i, int x) {
		if(i>=arr.length)
			return;
		
		if(arr[i] == x)
		System.out.print(i + " ");
		
		allIndex(arr, ++i, x);
	}

	public static void  allIndex(int arr[], int x) {
		allIndex(arr, 0, x);
	}
	
	public static void main(String[] args) {

			Scanner sc = new Scanner(System.in);
			
			int n = sc.nextInt();
			
			int [] arr = new int[n];
			for(int i=0; i<n; i++)
				arr[i] = sc.nextInt();
			
			int x = sc.nextInt();
			
			allIndex(arr,x);

	}

}
