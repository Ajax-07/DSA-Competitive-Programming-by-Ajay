package Stack_Queue_10;
import java.util.Stack;
import java.util.Scanner;

public class balancedBracket {
	
	public static boolean check(String str) {
		Stack<Character> st = new Stack<>();
	    char x;
		int i=0;
		while(i<str.length()) {
			if(str.charAt(i) == '[' || str.charAt(i) == '{' ||  str.charAt(i) == '(') {
				st.push(str.charAt(i));
				i++; continue;
			}
			if(st.empty())
				return false;
			
			if(str.charAt(i) == ']' || str.charAt(i) == '}' ||  str.charAt(i) == ')') {
				switch(str.charAt(i)) {
				case ')' :
					x = st.peek();
					st.pop();
					if(x == '{' || x == '[')
						return false;
					break;
				case '}' :
					x = st.peek();
					st.pop();
					if(x == '(' || x == '[')
						return false;
					break;
				case ']':
					x = st.peek();
					st.pop();
					if(x == '(' || x == '{')
						return false;
					break;
				}
			}
		   i++;	
		}
		 return st.empty();
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		String bracket = s.next();
		if(check(bracket))
			System.out.println("yes"); 
		else
			System.out.println("No");
	}

}
