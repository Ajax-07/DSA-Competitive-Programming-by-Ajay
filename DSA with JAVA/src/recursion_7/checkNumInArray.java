package recursion_7;

import java.util.Scanner;

public class checkNumInArray {
	
	//helper 
	public static boolean checkX(int arr[], int i, int x) {
		if(i>=arr.length)
			return false;
		if(arr[i] == x)
			return true;
		return checkX(arr,++i,x);
	}
	
	public static boolean checkX(int arr[], int x) {
		return checkX(arr, 0, x);
	}

	public static void main(String[] args) {

			Scanner sc = new Scanner(System.in);
			
			int n = sc.nextInt();
			
			int [] arr = new int[n];
			for(int i=0; i<n; i++)
				 arr[i] = sc.nextInt();
			
			int x = sc.nextInt();
			
			System.out.println(checkX(arr,x));
	}

}
