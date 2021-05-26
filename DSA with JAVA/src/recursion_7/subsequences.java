package recursion_7;

import java.util.Scanner;

public class subsequences {
	public static String [] fun(String str) {
		if(str.length() == 0) {
			String ans[] = {""};
			return ans;
		}
		
		String smallAns[] = fun(str.substring(1));
		
		int n = smallAns.length;
		String ans[] = new String[n*2];
		for(int i=0; i<n; i++)
			ans[i] = smallAns[i];
		
		for(int i=0; i<n; i++) {
			ans[n+i] = str.charAt(0) + smallAns[i];
		}
	return ans;	
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.next();
		
		String [] ans = fun(str);
		
		for(int i=0; i<ans.length; i++) {
			System.out.println(ans[i]);
		}

	}

}
