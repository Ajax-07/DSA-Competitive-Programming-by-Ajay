package Hashmap_14;

public class mapUse {

	public static void main(String[] args) {
		map<String,Integer> m = new map<>();
		m.insert("abc", 1000);
		m.insert("def", 2000);
		m.insert("def", 3000);
		m.insert("def", 3000);
		m.insert("xyz", 9000);
		m.insert("jxg", 6000);
		m.insert("jdx", 4000);
		m.insert("uej", 7000);
		m.insert("sjd", 8000);
		
		
	  System.out.println(m.size());
	  
	  System.out.println(m.getVlue("xyz"));
	  
	}

}
