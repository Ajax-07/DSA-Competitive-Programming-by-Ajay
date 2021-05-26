package string_4;

import java.util.Scanner;

public class reverseEveryWord {

	public static String reverseWord(String str) {
		String ans="";
		int n = str.length();
		int i=0;
		while(i<n) {
			ans = str.charAt(i)+ans;
			i++;
		}
		
		return ans;
	}
	
	public static String reverse(String sentence) {
		String ans="";
		
		String currWord = "";
		
		for(int i=0; i<sentence.length(); i++) {
			if(sentence.charAt(i) == ' ') {
				// reverse currWord
				currWord = reverseWord(currWord);
				
				// Add reversed word in ans
				ans += currWord + " ";
				
				currWord = "";
				
			}
			else
			   currWord += sentence.charAt(i);
		}
		
		ans += reverseWord(currWord);
		
		return ans;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		
		String sentence = s.nextLine();
		
		System.out.println(reverse(sentence));
		
	}

}
