package javaFundamental_1;

import java.util.Scanner;

public class checkPrime {
	public static boolean isPrime(int n) {
		if(n==1 || n==0)
			 return false;
		
		boolean check=true;
		
		for(int i=2; i<n; i++) {
			if(n%i == 0) {
				check = false;
				break;
			}
		}
		return check;
	}
	
	public static void main(String [] str) {
		Scanner s = new Scanner(System.in);
		
		int num = s.nextInt();
		
		if(isPrime(num)) 
			System.out.println("Yes ! prime") ;
		else
			System.out.println("Not prime !");
	}
}
