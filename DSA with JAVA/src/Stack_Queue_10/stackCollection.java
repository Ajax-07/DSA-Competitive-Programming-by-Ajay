package Stack_Queue_10;

import java.util.Stack;

public class stackCollection {

	public static void main(String[] args) {
		Stack<Integer> stack = new Stack<>();
		
		int arr[] = {1,3,4,6,8};
		
		for(int i=0; i<arr.length; i++) {
			stack.push(arr[i]);
		}
		
		System.out.println(stack.size());
		System.out.println(stack.empty());
		
		while(!stack.empty()) {
			System.out.println(stack.peek());
			stack.pop();
		}
		System.out.println(stack.size());
	}

}
