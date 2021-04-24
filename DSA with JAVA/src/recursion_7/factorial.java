package recursion_7;

import java.util.Scanner;

public class factorial {
	
	public static int fact(int n) {
		if(n <=1)
			return 1;
	   return n*fact(n-1);	
		
	}

	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		
		int n = s.nextInt();
		
		System.out.println(fact(n));

	}

}
