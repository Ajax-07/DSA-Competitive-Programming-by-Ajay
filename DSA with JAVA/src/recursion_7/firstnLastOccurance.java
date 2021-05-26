package recursion_7;

import java.util.Scanner;

public class firstnLastOccurance {
	
	//helper
	public static int lastIndex(int arr[], int i, int x) {
		if(i<0)
			return -1;
		if(arr[i] == x)
			return i;
		return lastIndex(arr, --i, x);
	}
	
	public static int lastIndex(int arr[], int x) {
		return lastIndex(arr, arr.length-1, x);
	}
	
	//helper
	public static int firstIndex(int arr[], int i, int x) {
		if(i>=arr.length)
			return -1;
		
		if(arr[i] == x)
			return i;
		
		return firstIndex(arr, ++i, x);
	}
	
	public static int firstIndex(int arr[], int x) {
		return firstIndex(arr,0,x);
	}
	
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int [] arr = new int[n];
		for(int i=0; i<n; i++)
			arr[i] = sc.nextInt();
		
		int x = sc.nextInt();
		
		System.out.println(firstIndex(arr,x));
		System.out.println(lastIndex(arr,x));

	}

}
