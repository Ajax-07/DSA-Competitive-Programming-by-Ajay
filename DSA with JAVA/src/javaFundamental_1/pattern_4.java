package javaFundamental_1;

import java.util.Scanner;

public class pattern_4 {
	
/*
Pattern 4	
 
*****
 ****
  ***
   **
    *
		 
*/	
	public static void main(String [] str) {
        Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int i=1;
		while(i<=n) {
			int j = 1; 
			  while(j<=n) {
				  if(j>=i && j<=n)
					   System.out.print("*");
				  else 
					  System.out.print(" ");
				  j++;
			  }
			  System.out.println();
			  i++;
		}
	}
}
