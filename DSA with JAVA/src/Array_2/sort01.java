package Array_2;

import java.util.Scanner;

public class sort01 {
	public static int[] sort(int arr[]) {
		int temp[] = new int[arr.length];
		
		int k=0;
		for(int i=0; i<arr.length; i++)
			if(arr[i] == 0) {
				temp[k] = arr[i];
				k++;
			}
		
		for(int i=0; i<arr.length; i++)
			if(arr[i] == 1) {
				temp[k] = arr[i];
				k++;
			}
		
		return temp;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int arr[] = new int[n];
		for(int i=0; i<n; i++)
			 arr[i] = sc.nextInt();
		
		arr = sort(arr);
		
		for(int i=0; i<n; i++)
			System.out.print(arr[i] + " ");

	}

}
