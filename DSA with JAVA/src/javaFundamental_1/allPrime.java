package javaFundamental_1;

import java.util.Scanner;

public class allPrime {
	public static boolean isPrime(int n) {
		if(n==1 || n==0)
			 return false;
		
		boolean check=true;
		
		for(int i=2; i*i<=n; i++) {
			if(n%i == 0) {
				check = false;
				break;
			}
		}
		return check;
	}
	
	public static void printAllPrime(int n) {
		
		for(int i=2; i<n; i++) {
			if(isPrime(i))
				System.out.print(i + " ");
		}
	}
	
	public static void main(String [] str) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		printAllPrime(n);
	}
}
