package javaFundamental_1;

import java.util.Scanner;

public class pattern_6 {
	/*
	Pattern 6	
	 
	    1     
	   121    
	  12321   
	 1234321  
	123454321 

			 
	*/	
		public static void main(String [] str) {
	        Scanner sc = new Scanner(System.in);
			
			int n = sc.nextInt();
			
			
			for(int i=1; i<=n; i++) {
				int k=1;
				int j=1;
				
				while(j<=2*n) {
					if(j>=n-i+1 && j<=n+i-1) {
						System.out.print(k);
						if(j<n)
							k++;
						else
							k--;
					}
					else
						System.out.print(" ");
					
					j++;
				}
				System.out.println();
			}
		}
}
