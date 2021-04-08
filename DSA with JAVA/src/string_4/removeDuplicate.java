package string_4;
import java.util.Scanner;

public class removeDuplicate {
	
	public static String removeDup(String s) {
		String  temp = "";
		temp += s.charAt(0);
		
		int i=1;
		while(i<s.length()) {
			if(s.charAt(i) != s.charAt(i-1))
			     temp += s.charAt(i);
		   i++;	     
		}
		
		return temp;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.next();
		
		String res = removeDup(str);
        
		System.out.println(res);
	}

}
