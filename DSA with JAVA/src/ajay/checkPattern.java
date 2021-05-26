package ajay;

public class checkPattern {

	public static void main(String[] args) {
		
		String text = "aababbaaababaababaa";
		String pat = "aaba";
		
		 Search(text,pat);

	}

	private static void Search(String text, String pat) {
		int m = text.length();
		int n = pat.length();
		
		for(int i=0; i<=m-n; i++) {
			int j;
			for( j=0; j<n; j++) {
				if(pat.charAt(j) != text.charAt(i+j))
					break;
			}
			if(j == n)
				System.out.println(i);
		}
	}


}
