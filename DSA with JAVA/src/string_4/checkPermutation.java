package string_4;

import java.util.Scanner;

public class checkPermutation {
	public static boolean checkPer(String s1, String s2) {
		
		int x=0, y=0;
		
		for(int i=0; i<s1.length(); i++)
			x += (int)s1.charAt(i);
		
		for(int i=0; i<s2.length(); i++)
			y += (int)s2.charAt(i);
		
		return (x == y);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str1 = sc.next();
		String str2 = sc.next();
		
		System.out.println(checkPer(str1,str2));

	}

}
