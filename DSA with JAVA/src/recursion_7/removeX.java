package recursion_7;

import java.util.Scanner;

public class removeX {
	
	
	public static String removex(String str) {
		if(str.length() == 0)
			return str;
		
		String ans = "";
		if(str.charAt(0) != 'x')
			ans += str.charAt(0);
		
		String smallans = removex(str.substring(1));
		return  ans+smallans;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.next();
		
		System.out.println(removex(str));

	}

}
