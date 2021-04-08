package Array_2;

import java.util.Scanner;

// basic of array

public class array1 {
	
	// Swap element
	
	public static void swap (int [] arr) {
		
		for(int i=1; i<arr.length; i+=2) {
			int temp = arr[i-1];
			arr[i-1] = arr[i];
			arr[i] = temp;
		}
	}
	
	//increament in array
	public static void increament(int[] x) {
		for(int i=0; i<x.length; i++)
			 x[i] *= 10;
	}
	

	
	// Linear search 
	public static boolean linearSearch(int [] arr,int k) {
		
		
		for (int i=0; i<arr.length; i++) {
			if(arr[i] == k)
				return true;
		}
		
		return false;
	}
	
	// array sum
	public static int sum(int [] arr) {
		
		int sum =0;
		
		for(int i=0; i<arr.length; i++) {
			sum += arr[i];
		}
		return sum;
	}
	
	// maximum element
	public static int maxElement(int [] arr) {
		
		int max = Integer.MIN_VALUE;
		
		for(int i=0 ; i<arr.length; i++) {
			if(max < arr[i])
				 max = arr[i];
		}
		
		return max;
	}

	// taking input array
	public static int[] takeInput() {
		Scanner sc = new Scanner(System.in);	
		int size = sc.nextInt();
		int [] arr = new int[size];
		
		for(int i=0; i<size; i++) {
			arr[i] = sc.nextInt();
		}
		
		return arr;
	}
	
	public static void print(int[] arr) {
		int size = arr.length;
		
		for(int i=0; i<size; i++)
			 System.out.print(arr[i] + " ");
	}
	
	// print array
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		
		int arr[] = takeInput();        // take input array
		
		print(arr);   // print array
		
		System.out.print("\nmaximum element : " );
		System.out.println(maxElement(arr));     // find maximum element in array
		
		System.out.println("\nArray Sum : " + sum(arr));    // array sum
		
		
		int k = sc.nextInt();
		if(linearSearch(arr,k))
		   System.out.println("Elemnt " + k + " Present");
		else 
			System.out.println("Not present");
		
		System.out.println(arr);     // [I@723279cf (it may vary) [->(indicates array)  I -> (indicates integer)
		                              //      after @ that is the reference or address of array "arr";
		
		
		int a[] = {1,2,6,4,5,-4, 8, 7, 10};
		increament(a);
		print(a);            // 10 20 30 40 50
		
		
		int b[] = new int[5];
		b = new int[100];
		 
		 System.out.println("\n" + b.length);   // 100
		 
		 swap(a);     // two adjacent element
		 for(int i=0; i<a.length; i++)
			 System.out.print(a[i] + " ");
		 
	}
}
