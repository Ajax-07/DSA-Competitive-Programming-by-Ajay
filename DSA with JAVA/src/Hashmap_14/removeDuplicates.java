package Hashmap_14;

import java.util.HashMap;
import java.util.Scanner;

public class removeDuplicates {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i=0; i<n; i++) {
			arr[i] = sc.nextInt();
		}
		HashMap<Integer, Boolean> mp = new HashMap<>();
		
		for(int i=0; i<n; i++) {
			if(!mp.containsKey(arr[i])) {
				mp.put(arr[i], true);
			}
		}
		
		for(int key : mp.keySet()) {
			System.out.print(key + " ");
		}
		

	}

}
