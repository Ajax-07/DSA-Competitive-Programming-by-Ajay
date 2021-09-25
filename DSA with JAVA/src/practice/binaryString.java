package practice;

import java.util.Scanner;

public class binaryString {
	
	public static int solve(String s) {
		
		int ans=s.charAt(0)-48;
		
		int i=1;
		char op='\0';
		
		while(i<s.length()) {
			if(s.charAt(i) == 'A' || s.charAt(i) == 'B' || s.charAt(i) == 'C')
				op = s.charAt(i);
			else {
				int x = s.charAt(i)-48;
				if(op == 'A')
					ans = ans&x;
				else if(op == 'B')
					ans = ans|x;
				else
					ans = ans^x;
			}
			
			i++;
				
		}
		
		return ans;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String s = sc.next();
		
		System.out.println(solve(s));
	}

}
