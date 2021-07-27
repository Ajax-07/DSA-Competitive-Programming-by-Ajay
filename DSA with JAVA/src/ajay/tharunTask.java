package ajay;

import java.util.HashMap;
import java.util.Scanner;

public class tharunTask {
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the firstname lastname");
		String first = sc.next();
		String last = sc.next();
		
		
		if(first.length() < 4 && last.length() < 4) {
			System.out.println(first + " "  + last + " is too short");
			return;
		}
		
		if(first.length() < 4) {
			System.out.println(first + " is too short");
			return ;
		}
		if(last.length() < 4) {
			System.out.println(last + " is too short");
			return;
		}
		
			
		
		HashMap<Character, Integer> m = new HashMap<>();
		for(int i=0; i<first.length(); i++) {
			if(m.containsKey(first.charAt(i))) {
				m.replace(first.charAt(i), m.get(first.charAt(i))+1);
			}else 
				m.put(first.charAt(i), 1);
		}
		
		
		int check = 1;
		for(int i=0; i<first.length(); i++) {
			if(m.get(first.charAt(i)) == 1) {
				System.out.println("First non-repeating character in " + first);
				System.out.println(first.charAt(i));
				check = 0;
				break;
			}
		}
		if(check == 1)
			System.out.println("no no-repeating chararacter in " + first);
		
		
		m.clear();
		for(int i=0; i<last.length(); i++) {
			if(m.containsKey(last.charAt(i))) {
				m.replace(last.charAt(i), m.get(last.charAt(i))+1);
			}else 
				m.put(last.charAt(i), 1);
		}
		
		
		check = 1;
		for(int i=last.length()-1; i>=0; i--) {
			if(m.get(last.charAt(i)) == 1) {
				System.out.println("Last non-repeating character in " + first);
				System.out.println(last.charAt(i));
				check = 0;
				break;
			}
		}
		if(check == 1)
			System.out.println("no no-repeating chararacter in " + first);
		
				
	}
}
