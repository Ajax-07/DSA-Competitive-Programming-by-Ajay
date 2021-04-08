package javaFundamental_1;

import java.util.Scanner;

public class decimalToBinary {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int decimal = sc.nextInt();
		
		int[] binary = new int[32];
		
		int i=0;
		while(decimal>0) {
			binary[i] = decimal%2;
			decimal /= 2;
			
			i++;
		}
		
		for(int j=i-1; j>=0; j--)
			System.out.print(binary[j]);

	}

}
