package javaFundamental_1;

import java.util.Scanner;

public class binaryToDecimal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		
		int binary = sc.nextInt();
		
		int decimal=0;
		
		int i=0;
		while(binary>0) {
			decimal += binary%10 * Math.pow(2, i); 
			binary /= 10;
			 i++;
		}
		
		System.out.println(decimal);

	}

}
