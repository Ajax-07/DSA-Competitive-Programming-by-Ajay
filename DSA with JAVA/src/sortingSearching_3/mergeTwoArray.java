package sortingSearching_3;

import java.util.Scanner;

public class mergeTwoArray {
	public static int [] merge(int A[], int B[]) {
		int ln = A.length;
		int rn = B.length;
		int  res[] = new int[ln+rn];
		
		int i=0; 
		int j=0;
		int k = 0; 
		while(i<ln && j<rn) {
			if(A[i] <= B[j]) {
				res[k] = A[i];
				i++;
				k++;
			}else {
				res[k] = B[j];
				j++;
				k++;
			}
		}
		
		while(i<ln) {
			res[k] = A[i];
			i++; k++;
		}
		
		while(j<rn) {
			res[k] = B[j];
			j++; k++;
		}
		
		return res;
	}
	
	
	
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int A[] = new int[n];
		
		for(int i=0; i<n; i++)
			 A[i] = sc.nextInt();
		
		int m = sc.nextInt();
		int B[] = new int[m];
		
		for(int i=0; i<m; i++)
			 B[i] = sc.nextInt();
		
		int [] res = merge(A,B);
		
		for(int i=0; i<res.length; i++) {
			System.out.print(res[i] + " ");
		}
		
	}
}
