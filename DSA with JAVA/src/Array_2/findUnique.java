package Array_2;

import java.util.Scanner;

public class findUnique {
	
	public static int  unique(int [] arr) {
		int x = arr[0];
		
		for(int i=1; i<arr.length; i++)
			 x = x^arr[i];
		
		return x;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int test = sc.nextInt();
		
		while(test > 0) {
			int n=sc.nextInt();
			int arr[] = new int[n];
			for (int i=0; i<n; i++)
				 arr[i] = sc.nextInt();
			
			System.out.println();
			System.out.println(unique(arr));
			
			test--;
			
		}

	}

}
/*
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7

4
10
*/

