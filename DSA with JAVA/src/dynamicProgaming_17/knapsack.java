package dynamicProgaming_17;

public class knapsack {
	
	public static int knapRec(int w[], int v[], int i, int cap) {
		if(i==w.length || cap == 0)
		  return  0;
		
		if(w[i] > cap) {
			return knapRec(w, v, i+1, cap);
		}
		
		int x =  v[i] + knapRec(w, v, i+1, cap-w[i]);
		int y =  knapRec(w, v, i+1, cap);
		return Math.max(x,y);
		
	}
	
	// memoization
	
	public static int knapMem(int w[], int v[], int i, int cap, int ans[][]) {
		if(i==w.length || cap == 0) {
			ans[i][cap] = 0;
			return ans[i][cap];
		}
		
		if(ans[i][cap] != -1)
			return ans[i][cap];
		
		if(w[i] > cap) {
			ans[i][cap] =  knapMem(w, v, i+1, cap, ans);
			return ans[i][cap];
		}
		
		int x =  v[i] + knapMem(w, v, i+1, cap-w[i], ans);
		int y =  knapMem(w, v, i+1, cap, ans);
		
		ans[i][cap] =  Math.max(x,y);
		return ans[i][cap];
		
	}
	public static int knapMem(int w[], int v[], int cap) {
		int ans[][] = new int[w.length+1][cap+1];
		for(int i=0; i<=w.length; i++)
			for(int j=0; j<=cap; j++)
			ans[i][j] = -1;
		return knapMem(w,v,0,cap,ans);
	}
	
	// dynamic programming (Iterative)
	public static int knapDP(int w[], int v[], int cap) {
		int n = w.length;
		int ans[][] = new int[n+1][cap+1];
		for(int i=0; i<=n; i++)
			for(int j=0; j<=cap; j++)
			  ans[i][j] = -1;
		
		for(int i=0; i<=n; i++)
			ans[i][0] = 0;
		for(int j=0; j<=cap; j++)
			ans[0][j] = 0;
		
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=cap; j++) {
				if(w[i-1] > j)
					ans[i][j] = ans[i-1][j];
				else {
					ans[i][j] = Math.max(v[i-1]+ans[i-1][j-w[i-1]], ans[i-1][j]);
				}
			}
		}
		return ans[n][cap];
	}
	

	public static void main(String[] args) {
		int w[] = {6,1,2,4,5,3};
		int v[] = {10,5,4,8,6,12};
		
		int cap = 5;
		
		System.out.println(knapDP(w,v,cap));
		System.out.println(knapMem(w,v,cap));
		System.out.println(knapRec(w,v,0,cap));
	}

}
