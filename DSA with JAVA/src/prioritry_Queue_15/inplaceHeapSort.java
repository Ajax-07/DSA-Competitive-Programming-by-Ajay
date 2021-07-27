package prioritry_Queue_15;

import java.util.Scanner;

public class inplaceHeapSort {
	
	public static void swap(int arr[], int i, int j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	
	public static void heapInsert(int arr[],  int index) {
		int childIndex = index;
		int parentIndex = (index-1)/2;
		
		while(parentIndex >=0 && arr[childIndex] > arr[parentIndex]) {
			swap(arr, childIndex, parentIndex);
			childIndex = parentIndex;
			parentIndex = (childIndex-1)/2;
		}
	}
	
	public static void heapDelete(int arr[], int i, int j) {
		
		int parentIndex = 0;
		int leftChildIndex = 1;
		int rightChildIndex = 2;
		int maxIndex = parentIndex;
		
		while(leftChildIndex < j) {
			if(arr[maxIndex] < arr[leftChildIndex])
				maxIndex = leftChildIndex;
			if(rightChildIndex < j && arr[maxIndex] < arr[rightChildIndex])
				maxIndex = rightChildIndex;
			
			if(maxIndex == parentIndex) break;
			
			swap(arr, parentIndex, maxIndex);
			parentIndex = maxIndex;
			leftChildIndex = parentIndex*2+1;
			rightChildIndex = parentIndex*2+2;
		}
	}
	
	public static void heapSort(int arr[]) {
		int n = arr.length;
		if(n<=1)
			return;
		
		for(int i=1; i<n; i++) {
			heapInsert(arr, i);
		}
		for(int i=0; i<n; i++) {
			swap(arr, 0, n-i-1);
			heapDelete(arr, 0,n-i-1);
		}
		
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int arr[] = new int[n];
		
		for(int i=0; i<n; i++)
			arr[i] = sc.nextInt();
		
		heapSort(arr);
		
		for(int i : arr)
			System.out.print(i + " ");
		
		
	}

}
