package ajay;

public class palindrome {

	public static void main(String[] args) {
		String str = "A man, A plan, a canal: panama";
		String str2 = "i'm Ajay kumar";
		
		System.out.println(check(str));    // true
		System.out.println(check(str2));    // false

	}

	private static boolean check(String str) {
		
		int i = 0;
		int j = str.length()-1;
		while(i<j) {
			while(i<j && !Character.isLetterOrDigit(str.charAt(i)))
				i++;
			while(j>i && !Character.isLetterOrDigit(str.charAt(j)))
				j--;
			if(i<j && Character.toLowerCase(str.charAt(i)) != Character.toLowerCase(str.charAt(j)))
				return false;
			
			i++; j--;
		}
		
		return true;
	}

}
