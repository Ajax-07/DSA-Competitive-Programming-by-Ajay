package string_4;

import java.util.Scanner;

public class removeChar {
	
	public static String Remove(String s, char ch) {
		String temp="";
		
		int i=0;
		while(i<s.length()) {
			if(s.charAt(i) != ch) 
				temp += s.charAt(i);
			i++;
		}
		return temp;
	}
	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.nextLine();
		char x = sc.next().charAt(0);
		
		String res = Remove(str,x);
		System.out.println(res);
	}
}
