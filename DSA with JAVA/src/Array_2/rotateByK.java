package Array_2;

import java.util.Scanner;

    public class rotateByK {
    	
    	public static void rotate(int arr[],int k) {
    		int n=arr.length;
    		int temp[] = new int[n];
    		for(int i=0; i<n; i++)
    			temp[(n-k+i)%n] = arr[i];
    		
    		for(int i=0; i<n; i++)
    			arr[i] = temp[i];
    	}
    	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int arr[] = new int[n];
		for(int i=0; i<n; i++)
			 arr[i] = sc.nextInt();
		int k = sc.nextInt();
		
		rotate(arr,k);
		for(int i=0; i<n; i++)
			System.out.print(arr[i] + " ");
	}
		
}
