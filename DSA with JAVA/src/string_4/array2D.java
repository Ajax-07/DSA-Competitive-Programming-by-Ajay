package string_4;

import java.util.Scanner;

public class array2D {
	
	public static int largestSum(int[][] arr) {
		int max = Integer.MIN_VALUE;
		
		for(int j=0; j<arr[0].length; j++) {
			int sum = 0;
			for(int i=0; i<arr.length; i++)
				sum += arr[i][j];
			if(max < sum)
				max = sum;
		}
		
		return max;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int row = sc.nextInt();
		int col = sc.nextInt();
		int arr2D[][] = new int[row][col];
		
		
		for(int i=0; i<row; i++) {
			for(int j=0; j<col; j++)
				arr2D[i][j] = sc.nextInt();
		}
		
		
/*       arr is master array which contain references of 1D arrays as entries
		 arr[0], arr[1] ..... is a 1D array 
		 
5
4
1 2 3 4
4 3 2 1
5 6 7 8
8 7 6 5 
9 10 11 12
[I@723279cf      -->references
1 2 3 4          -->1Darray
[I@10f87f48 
4 3 2 1 
[I@b4c966a 
5 6 7 8 
[I@2f4d3709 
8 7 6 5 
[I@4e50df2e 
9 10 11 12 
		 
		 */
		
	   System.out.println(arr2D);	 // reference of 2D array
		for(int i=0; i<row; i++) {
			System.out.println(arr2D[i] + " ");
			for(int j=0; j<col; j++)
				System.out.print(arr2D[i][j] + " ");
			
			System.out.println();
		}
		
		
		// calculate largest sum column
		
		System.out.println(largestSum(arr2D));
		
		
		
		// jagged array which has different size of column
		int temp[][] = new int[3][];
		
		for(int i=0; i<3; i++) {
			temp[i] = new int[i+2];
		}
		
		// print jagged array
		for(int i=0; i<temp.length; i++) {
			for(int j = 0; j<temp[i].length; j++) {
				System.out.print(temp[i][j] + " ");	
			}
			
			System.out.println();
		}

	}

}
