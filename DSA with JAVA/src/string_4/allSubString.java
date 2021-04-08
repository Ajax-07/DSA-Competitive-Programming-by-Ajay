package string_4;

import java.util.Scanner;

public class allSubString {
	
	public static void printSubString(String s){
		for(int i=0; i<s.length(); i++) {
			for(int j = i ; j<=s.length(); j++)
				System.out.println(s.substring(i,j));
		}
	}
	
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		
		printSubString(str);
	}
}
