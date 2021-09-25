package practice;

import java.util.Scanner;

public class checkPassword {
	public static boolean solve(String s) {
		if(s.length() < 4 || (s.charAt(0) >= '0' && s.charAt(0) <= '9'))
			return false;
		
		boolean checkCap=false;
		boolean checkNum=false;
		
		int i=0;
		
		while(i<s.length()) {
			if(s.charAt(i) == 32 || s.charAt(i) == '/' )
				return false;
			else if(s.charAt(i) >= '0' && s.charAt(i) <= '9')
				checkNum = true;
			else if( (s.charAt(i) >= 'A' && s.charAt(i) <= 'Z') )
				checkCap = true;
			
			i++;
		}
		
		return checkCap&&checkNum;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String s = sc.next();
		
		System.out.println(solve(s));
	}

}
