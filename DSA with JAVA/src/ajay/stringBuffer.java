package ajay;

public class stringBuffer {
	public static void main(String [] arg) {
		
		// we know string in java is immutable but still we have an 
		// alternate to make change in our string that is something called StringBuffer
		
		/*
		  
		String s = "abc";
		//s.charAt(1) = 'k';  gives error
		
		*/
		
		StringBuffer str = new StringBuffer("abcd");
		System.out.println(str);
		
		// make change
		str.setCharAt(2, 'k');
		System.out.println(str);
		
		
	}
}
