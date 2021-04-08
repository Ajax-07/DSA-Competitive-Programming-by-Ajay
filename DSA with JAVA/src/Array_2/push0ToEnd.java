package Array_2;

import java.util.Scanner;

public class push0ToEnd {
	
	public static int[] push0(int arr[]) {
		int temp[] = new int[arr.length];
		
		int k =0;
		for(int i=0; i<arr.length; i++)
			if(arr[i] != 0){
				temp[k] = arr[i];
		        k++;
		      }
		for(int i=0; i<arr.length; i++)
			if(arr[i] == 0){
				temp[k] = arr[i];
		        k++;
		      }
		
		return temp;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int arr[] = new int[n];
		for(int i=0; i<n; i++)
			 arr[i] = sc.nextInt();
		
		arr = push0(arr);
		
		for(int i=0; i<n; i++)
			System.out.print(arr[i] + " ");

	}

}
