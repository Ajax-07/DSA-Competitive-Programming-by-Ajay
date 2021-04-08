package sortingSearching_3;

import java.util.Scanner;

public class insertionSort {
	
	public static void Sort(int [] arr) {
		for(int i=1; i<arr.length; i++) {
			int j = i-1;
			int temp = arr[i];
			while(j>=0 && arr[j]>temp) {
				arr[j+1] = arr[j];
				j--;
			}
			
			arr[j+1] = temp;
		  }
	}
	
	
	public static void main(String [] args) {
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
