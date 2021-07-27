package Hashmap_14;

import java.util.HashMap;
import java.util.Set;

public class inbuildHashMap {

	public static void main(String[] args) {
		HashMap<String, Integer> mp = new HashMap<>();
		
		// insert
		mp.put("abc", 10);
		mp.put("def", 20);
		mp.put("def", 30);
		mp.put("ghi", 40);
		mp.put("jkl", 20);
		
		//get size
		System.out.println(mp.size()); // 4
		// get value
		System.out.println(mp.get("def")); // 30
		
		//iterate
		Set<String> key = mp.keySet();
		
		for(String str : key) {
			System.out.println(str + " " + mp.get(str));
		}
		
		//other way
		for(String str : mp.keySet()) {
			System.out.println(str + " " + mp.get(str));
		}
		
		// presence
		if(mp.containsKey("abc"))
			System.out.println("Yes");  // yes
		if(mp.containsKey("xyz"))
			System.out.println("Yes");  // no
		
		//remove
		mp.remove("def");
		System.out.println(mp.size()); // 3

	}

}
