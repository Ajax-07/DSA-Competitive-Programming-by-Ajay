package javaFundamental_1;

import java.util.Scanner;

public class squareRoot {
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		
		   int n = sc.nextInt();
		   
		  if(n == 1 || n == 0) {
			  System.out.println(n);
			  return;
		  }
		  
		  int i=1;
		  int sqrt = 0;
		  while(i*i<=n) {
			  sqrt = i;
			  i++;
		  }
		  
		  System.out.println(sqrt);
		
	}
}
