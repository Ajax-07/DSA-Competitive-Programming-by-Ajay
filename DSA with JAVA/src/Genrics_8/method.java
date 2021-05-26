package Genrics_8;

public class method {

	public static<T> void print(T arr[]) {
		for(int i=0; i<arr.length; i++) {
			System.out.print(arr[i] + " ");
		}
	}
	
	public static void main(String[] args) {
		Integer arr[] = {1,2,3,4,5,6,7,8,9};
		Character brr[] = {'a','b','c','d','e','f'};
		
		print(arr);
		System.out.println();
		print(brr);

	}

}
