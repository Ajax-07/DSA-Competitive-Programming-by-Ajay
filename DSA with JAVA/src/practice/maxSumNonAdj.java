package practice;

import java.util.*;

public class maxSumNonAdj {

public static int findMaxSum(int arr[], int n) {
	    // code here
	int include=0;
	int exclude=0;
    

    for(int i=0; i<n; i++){
        if(i==0){
            include = arr[i];
            exclude = 0;
        }else{
            int temp  = arr[i]+exclude;
            exclude = Math.max(include, exclude);
            include = temp;
        }

    }

    return Math.max(include, exclude);

}

	
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int arr[] = new int[n];
		for(int i=0; i<n; i++) {
			arr[i] = sc.nextInt();
		}
		
		System.out.println(findMaxSum(arr, n));
		
	}

}
