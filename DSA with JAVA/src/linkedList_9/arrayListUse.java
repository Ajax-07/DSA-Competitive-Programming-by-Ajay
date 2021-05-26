package linkedList_9;

import java.util.ArrayList;

public class arrayListUse {
	public static void main(String [] args) {
		ArrayList<Integer> arr = new ArrayList<>();
		
		System.out.println(arr.size());
		arr.add(10);
		arr.add(20);
		arr.add(30);
		arr.add(40);
		arr.add(50);
		arr.add(2, 60);
		arr.add(1,70);
		
		System.out.println(arr.size());
		
		for(int i=0; i<arr.size(); i++)
			 System.out.print(arr.get(i) + " ");
		System.out.println();
		
		ArrayList<Character> arr2 = new ArrayList<>(10);
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		arr2.add('A');
		
		System.out.println(arr2.size());
		arr2.set(3, 'S');
		arr2.set(5, 'e');
		arr2.set(8, 't');
		for(int i=0; i<arr2.size(); i++)
			 System.out.print(arr2.get(i) + " ");
		System.out.println();
		
		arr2.remove(3);       // index
		arr2.remove(6);     
		System.out.println(arr2.size());
		
		for(Character elem : arr2)
		 System.out.print(elem + " ");
	}
}
