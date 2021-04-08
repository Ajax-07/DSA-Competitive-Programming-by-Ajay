package javaFundamental_1;

import java.util.Scanner;

public class pattern_2 {

/*
Pattern 2	 

*****
****
***
**
*

	 
*/
	
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int i=1;
		while(i<=n) {
			int j = n; 
			  while(j>=i) {
				  System.out.print("*");
				  j--;
			  }
			  System.out.println();
			  i++;
		}
	}

}
