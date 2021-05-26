package Array_2;

import java.util.Scanner;
import java.util.Arrays;

public class arrayIntersection {
	
	// O(nlogn+mlogn)
	public static void intersection3(int a[], int b[]) {
		int n = a.length;
		int m = b.length;
		
		if(n<m) {
			Arrays.sort(a);
			
			for(int i=0; i<m; i++) {
				int k = 0;
				int l = n-1;
				while(k<=l) {
					int mid = (k+l)/2; 
					if(b[i] < a[mid]) {
						l = mid-1;
					}
					else if(b[i] > a[mid]) {
						k = mid+1;
					}
					else {
						System.out.println(b[i]);
						break;
					}
				}
			}
		}else {
           Arrays.sort(b);
			
			for(int i=0; i<n; i++) {
				int k = 0;
				int l = m-1;
				while(k<=l) {
					int mid = (k+l)/2; 
					if(a[i] < b[mid])
						l = mid-1;
					else if(a[i] > b[mid])
						k = mid+1;
					else {
						System.out.print(a[i] + " ");
						break;
					}
				}
			}
			
		}
	}
	
	// O(mlogm+nlogn)
	public static void intersection2(int a[], int b[]) {
		Arrays.sort(a);
		Arrays.sort(b);
		
		int i = 0; 
		int j = 0;
		
		while(i<a.length && j<b.length) {
			if(a[i]<b[j])
				i++;
			else if(a[i]>b[j])
				j++;
			else {
				System.out.print(a[i] + " ");
				i++; j++;
			}
		}
		
	}
    
	// O(m*n)
	public static void intersection1(int[] a, int b[]) {
		for(int i=0; i<a.length; i++) {
			int j;
			for(j=0; j<b.length; j++) {
				if(a[i] == b[j])
					break;
			}
			if(j < b.length)
				System.out.print(b[j] + " ");
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int m = sc.nextInt();
		
		int arr[] = new int[n];
		int brr[] = new int[m];
		
		for(int i=0; i<n; i++)
			arr[i] = sc.nextInt();
		
		for(int i=0; i<m; i++)
			brr[i] = sc.nextInt();
		
		intersection1(arr, brr);
		System.out.println();
		intersection2(arr, brr);
		System.out.println();
		intersection3(arr, brr);
		

	}

}
