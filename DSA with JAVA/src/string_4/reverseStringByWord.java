package string_4;

import java.util.Scanner;

public class reverseStringByWord {
	
	
	public static String reverse(String s) {
		String temp[] = s.split(" ");
		
		String ans = "";
		
		for(int i=temp.length-1; i>=0; i--) {
			ans += temp[i] + " ";
		}
		
		return ans.substring(0,ans.length()-1);
	}
	
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.nextLine();
		
		System.out.println(reverse(str));
	}
}
