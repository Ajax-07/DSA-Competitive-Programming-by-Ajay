package recursion_7;

import java.util.Scanner;

public class countDigit {
	
	public static int countDig(int n) {
		if(n<=0)
			return 0;
		
		return 1+countDig(n/10);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		System.out.println( countDig(n) );
	}

}
