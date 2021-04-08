package javaFundamental_1;

import java.util.Scanner;

public class reverseNum {

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		
		int num = sc.nextInt();
		
		int revNum=0;
		while(num > 0) {
			revNum = revNum*10+num%10;
			num /= 10;
		}
		
		System.out.println(revNum);

	}

}
