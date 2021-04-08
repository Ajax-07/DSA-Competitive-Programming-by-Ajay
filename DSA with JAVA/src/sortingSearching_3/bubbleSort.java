package sortingSearching_3;

import java.util.Scanner;

public class bubbleSort {
	
	public static void Sort(int arr[]) {
		
		for(int k=0; k<arr.length-1; k++) {
			int i=0;
			while(i<arr.length-1) {
				if(arr[i] > arr[i+1]) {
					int temp = arr[i];
					arr[i] = arr[i+1];
					arr[i+1] = temp;
				}
				i++;
			}
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
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
