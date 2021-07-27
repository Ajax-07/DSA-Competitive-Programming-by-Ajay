package dynamicProgaming_17;

public class LCS {
	
	// recursive
	public static int lcsRecur(String s, String t) {
		if(s.length() == 0 || t.length() == 0)
			return 0;
		
		int ans=Integer.MIN_VALUE;
		if(s.charAt(0) == t.charAt(0)) {
			ans = 1+lcsRecur(s.substring(1), t.substring(1));
		}else {
			int x = lcsRecur(s.substring(1), t);
			int y = lcsRecur(s, t.substring(1));
			ans = Math.max(x, y);
		}
		
		return ans;
	}
	
	// memoization
	
	public static int lcsMem(String s, String t, int ans[][]) {
		int m = s.length();
		int n = t.length();
		
		if(m == 0 || n == 0) {
			ans[m][n] = 0;
			return ans[m][n];
		}
		
		if(ans[m][n] != -1)
			return ans[m][n];
		
		int res=Integer.MIN_VALUE;
		if(s.charAt(0) == t.charAt(0)) {
			res = 1+lcsMem(s.substring(1), t.substring(1), ans);
		}else {
			int x = lcsMem(s.substring(1), t, ans);
			int y = lcsMem(s, t.substring(1), ans);
			res = Math.max(x, y);
		}
		ans[m][n] = res;
		
		return ans[m][n];
		
		
	}
	
	public static int lcsMem(String s, String t) {
		int m = s.length();
		int n = t.length();
		int ans[][] = new int[m+1][n+1];
		for(int i=0; i<=m; i++)
			for(int j=0; j<=n; j++)
				ans[i][j] = -1;
		
		return lcsMem(s, t,ans);
	}
	
	// Dynamic programming (Iterative)
	
	public static int lcsDP(String s, String t) {
		int m = s.length();
		int n = t.length();
		int ans[][] = new int[m+1][n+1];
		for(int i=0; i<=m; i++)
			for(int j=0; j<=n; j++)
				ans[i][j] = -1;
		
		for(int i=0; i<=m; i++)
			ans[i][0] = 0;
		for(int j=0; j<=n; j++)
			ans[0][j] = 0;
		
		for(int i=1; i<=m; i++) {
			for(int j=1; j<=n; j++) {
				if(s.charAt(i-1) == t.charAt(j-1))
					ans[i][j] = 1+ans[i-1][j-1];
				else
					ans[i][j] = Math.max(ans[i][j-1], ans[i-1][j]);
			}
		}
		
		return ans[m][n];
	}
	
	public static void main(String[] args) {
		String s = "AGGTAB";
		String t = "GXTXAYB";
		
		System.out.println(lcsDP(s, t)); // 4
		System.out.println(lcsMem(s, t)); // 4
		System.out.println(lcsRecur(s, t)); // 4
	}

}
