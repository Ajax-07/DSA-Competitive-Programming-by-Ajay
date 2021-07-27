package ajay;

import java.util.Scanner;

public class EmirpNo {
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the nubre of value");
		int n = sc.nextInt();
		
		if(n<1) {
			System.out.println(n + " is less than limit");
			return;
		}
		
		int arr[] = new int[n]; 
		System.out.println("Enter the Number");
		for(int i=0; i<n; i++) {
			arr[i] = sc.nextInt();
			if(arr[i] < 10) {
				System.out.println("Provided " + arr[i] + " is not valid");
				return;
			}
		}
		
		
		// logic
		for(int i=0; i<n; i++) {
			int num = arr[i];
			
			// check prime
			boolean flag = true;
			for(int j=2; j*j<=num; j++) {
				if(num%j == 0) {
					flag = false;
					break;
				}    
			}
			
			// reverse
			if(flag) {
				int rev = 0;
				while(num > 0) {
					rev = rev*10+num%10;
					num /= 10;
				}
				
			    // again check prime
				 flag = true;
				 num = rev;
				for(int j=2; j*j<=rev; j++) {
					if(rev%j == 0) {
						flag = false;
						break;
					}    
				}
				
				if(flag) {
					System.out.println(arr[i]);
				}
			}
		
		}
		
		
		
	}
}
