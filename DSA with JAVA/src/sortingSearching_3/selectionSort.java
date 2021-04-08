package sortingSearching_3;

import java.util.Scanner;

public class selectionSort {
	
	public static void Sort(int [] arr){
		for(int i=0; i<arr.length-1; i++) {
			int minElement=Integer.MAX_VALUE;
			int index=i;
			for(int j=i; j<arr.length; j++) {
				if(minElement > arr[j]) {
					minElement = arr[j];
					index = j;	
				}
			}
			arr[index] = arr[i]; 
			arr[i] = minElement;
			
			
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int [] arr = new int[n];
		
		for(int i=0; i<n; i++)
			arr[i] = sc.nextInt();
		
		Sort(arr);
		
		for(int i=0; i<n; i++)
			System.out.print(arr[i] + " ");

	}

}
