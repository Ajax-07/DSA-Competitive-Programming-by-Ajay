package string_4;

public class BasicFunction {
	
	public static void printPrefix(String s) {
		for(int i=0; i<=s.length(); i++) {
			System.out.println(s.substring(0,i));
		}
	}
	
	public static void print(String str) {
		for(int i=0; i<str.length(); i++)
			System.out.print(str.charAt(i) + " ");
	}
	
	public static void main(String [] args) {
		String str = "AbcDEfgHi";
		
		System.out.println(str);    // print string 
		System.out.println(str.charAt(4));     // accessing random char in string 
		System.out.println(str.substring(2,6));    //including 2, excluding 6
		
		String s = "XyZ";
		System.out.println(str.concat(s));  // combine string s and str
		
		// printing all char of string
		print(str);
		
		String x = "XyZ";
		if(s == x)                 // s.equal(x) compare content of strings
		    System.out.println("\nequal");      // equal : because both s, x is reference of same string in string pool
		else
			System.out.println("unequal");
		
		
		int [] arr = {1,2,3};
		int [] brr = {1,2,3};
		
		if(arr == brr)
			 System.out.println("equal");  
		else 
			System.out.println("unequal"); // unequal : because both arr has different reference
		
		// print al prefix of str
		
		printPrefix(str);
		
	}
}
