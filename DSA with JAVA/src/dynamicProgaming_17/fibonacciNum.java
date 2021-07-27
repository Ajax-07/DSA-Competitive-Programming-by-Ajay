package dynamicProgaming_17;

public class fibonacciNum {
	public static int fib(int n) {
		if(n==0 || n==1)
			return n;
		return fib(n-1)+fib(n-2);
	}
	
	public static int fibIterativenMem(int n, int ans[]){
		if(n==0 || n==1) {
			ans[n] = n;
			return ans[n];
		}
		
		if(ans[n] != -1) 
			 return ans[n];
		
		ans[n] = fibIterativenMem(n-1,ans)+fibIterativenMem(n-2, ans);
		return ans[n];
		
			
	}
	
	public static int fibIterativenMem(int n) {
		int ans[] = new int[n+1];
		for(int i=0; i<=n; i++)
			ans[i]=-1;
		return  fibIterativenMem(n, ans);
		
		/*
		// iterative (Dynamic programming)
		ans[0]=0;
		ans[1]=1;
		for(int i=2; i<=n; i++)
			ans[i] = ans[i-1]+ans[i-2];
		
		return ans[n];
		*/
	}

	public static void main(String[] args) {
		int n=45;
		System.out.println(fibIterativenMem(n));
		System.out.println(fib(n));
	}

}
