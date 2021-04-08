package Array_2;
import java.util.Scanner;

public class duplicate {
	
	// duplicate element
	public static int duplicate(int [] arr) {
		int max = Integer.MIN_VALUE;
		for(int i=0; i<arr.length; i++)
			 if(max < arr[i])
				 max = arr[i];
		int temp[] = new int[max+1];
		for(int i=0; i<arr.length; i++)
			 temp[arr[i]]++;
		
		for(int i=0; i<=max; i++)
			if(temp[i] > 1)
				 return i;
		
		return -1;
	}
	
	public static void main(String [] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int size = sc.nextInt();
		
		int arr[] = new int[size];
		
		for(int i=0; i<arr.length; i++)
			 arr[i] = sc.nextInt();
		
		System.out.println(duplicate(arr));
		
	}
}
