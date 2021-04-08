package javaFundamental_1;

import java.util.Scanner;

public class findnCr {
	public static int fact(int n) {
		int res=1;
		
		for(int i=2; i<=n; i++) {
			res *= i;
		}
		return res;
	}
	
	public static void main(String [] args) {
		Scanner s = new Scanner(System.in);
		
		int n = s.nextInt();
		int r = s.nextInt();
		
		int num = fact(n);
		int deno1 = fact(r);
		int deno2 = fact(n-r);
		
		int result = num/(deno1*deno2);
		System.out.println(result);
	}
}
