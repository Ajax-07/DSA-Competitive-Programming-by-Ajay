package Genrics_8;

public class pairUse {

	public static void main(String[] args) {
		//pair p = new pair(10,20);
		
		//pair<String> p = new pair<String>("ajay", "kumar");
		
		pair<Integer, String> p = new pair<Integer,String>(20, "ajay");
		pair<Integer, Character> p2 = new pair<>(20, 'A');            // left<> may or may not be declared
		System.out.println(p.first + " " + p.second);
		System.out.println(p2.first + " " + p2.second);
		
		
		pair<pair<Integer, String>, Character> p3 = new pair<>(p, 'A');
		System.out.println(p3.first.first + " "  + p3.first.second+ " " + p3.second);

	}

}
