package Array_2;

import java.util.Scanner;

public class equilibriumPoint {

	public static int findEqulibrium(int arr[]) {
		if(arr.length < 2)
			return -1;
		int k = 2;
		int index = 1;
		
		int LSum = arr[0];
		int RSum=0;
		
		for(int i=2; i<arr.length; i++) {
			RSum += arr[i];
		}
		
		while(k<arr.length) {
			if(LSum == RSum) 
				return index;
			
			LSum += arr[index];
			RSum -= arr[index+1];
			index++; 
			k++;
		}
		
		return -1;
		
	}
	
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int arr[] = new int[n];
		
		for(int i=0; i<n; i++)
			arr[i] = sc.nextInt();
		
		int ans = findEqulibrium(arr);
        
		System.out.println(ans);
	}

}
