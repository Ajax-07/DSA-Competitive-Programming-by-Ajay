package javaFundamental_1;

import java.util.Scanner;

public class pattern_5 {
	
/*
Pattern 5	
 
     *      
    ***     
   *****    
  *******   
 *********  
***********
		 
*/	
	public static void main(String [] str) {
        Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		
		for(int i=1; i<=n; i++) {
			
			for(int j=1; j<=2*n; j++) {
				
				if(j>=n-i+1 && j<=n+i-1)
					System.out.print("*");
				else 
					System.out.print(" ");
			}
			System.out.println();
		}
	}
}
