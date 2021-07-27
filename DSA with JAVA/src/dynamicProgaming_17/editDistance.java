package dynamicProgaming_17;

public class editDistance {
	
	// recursive
	public static int editDistRecur(String s, String t) {
		int m = s.length();
		int n = t.length();

		if(m == 0 ) {
			return n;
		}
		
		if(n == 0 ) {
		  return m;
		}
		
		if(s.charAt(0) == t.charAt(0))
			return editDistRecur(s.substring(1), t.substring(1));
		else {
			int x = editDistRecur(s, t.substring(1)); // insert
			int y = editDistRecur(s.substring(1), t.substring(1));  // replace
			int z = editDistRecur(s.substring(1), t);     // delete
			return 1+Math.min(x, Math.min(y, z));
		}
	}
	
	// memoization 
	
	public static int editDistMem(String s, String t, int ans[][]) {
		int m = s.length();
		int n = t.length();
		
		if(m == 0 ) {
			ans[m][n] = n;
			return ans[m][n];
		}
		
		if(n == 0 ) {
			ans[m][n] = m;
			return ans[m][n];
		}
		
		
		if(ans[m][n] != -1)
			return ans[m][n];
		
		if(s.charAt(0) == t.charAt(0)) {
			ans[m][n] =  editDistRecur(s.substring(1), t.substring(1));
			return ans[m][n];
		}
		else {
			int x = editDistMem(s, t.substring(1), ans); // insert
			int y = editDistMem(s.substring(1), t.substring(1), ans);  // replace
			int z = editDistMem(s.substring(1), t, ans);     // delete
			ans[n][m] = 1+Math.min(x, Math.min(y, z));
			return ans[m][n];
		}
		
	}
	public static int editDistMem(String s, String t) {
		int m = s.length();
		int n = t.length();
		int ans[][] = new int[m+1][n+1];
		for(int i=0; i<=m; i++)
			for(int j=0; j<=n; j++)
				ans[i][j] = -1;
		return editDistMem(s, t, ans);
	}
	
	// dynamic programming (Iterative)
	public static int editDistDP(String s, String t) {
		int m = s.length();
		int n = t.length();
		int ans[][] = new int[m+1][n+1];
		for(int i=0; i<=m; i++)
			for(int j=0; j<=n; j++)
				ans[i][j] = -1;
		
		for(int i=0; i<=m; i++)
			ans[i][0] = i;
		for(int j=0; j<=n; j++)
			ans[0][j] = j;
		
		for(int i=1; i<=m; i++) {
			for(int j=1; j<=n; j++) {
				if(s.charAt(i-1) == t.charAt(j-1))
					ans[i][j] = ans[i-1][j-1];
				else
					ans[i][j] = 1+Math.min(ans[i][j-1], Math.min(ans[i-1][j-1], ans[i-1][j]));
			}
		}
		
		return ans[m][n];
		
	}

	public static void main(String[] args) {
		String s = "sunday";
		String t = "saturday";
		
		System.out.println(editDistDP(s,t));
		System.out.println(editDistMem(s,t));
		System.out.println(editDistRecur(s,t));
	}

}
