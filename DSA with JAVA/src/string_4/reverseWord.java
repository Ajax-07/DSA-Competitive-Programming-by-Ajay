package string_4;

import java.util.Scanner;

public class reverseWord {
	
	public static String reverseWord(String s) {
		String  temp = "";
		
		int i=s.length()-1;
		while(i>=0) {
			temp += s.charAt(i);
			i--;
		}
		return temp;
	}
	
	public static String reverse(String s) {
		String arr[] = s.split(" ");
		
		String res = "";
		
		for(int i=0; i<arr.length; i++) {
			if(i==arr.length-1)
			   res += reverseWord(arr[i]);
			else
				res += reverseWord(arr[i]) + " ";
		}
		
		return res;
	}

    public static void main(String[] args) {
       	Scanner sc = new Scanner(System.in);
	
      	String str = sc.nextLine();
	   
	
     	System.out.println(reverse(str));

  }
}
