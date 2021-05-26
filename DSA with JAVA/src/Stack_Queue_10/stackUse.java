package Stack_Queue_10;

public class stackUse {

	public static void main(String[] args) throws StackEmptyException {
		/*
		
		stackUsingArray st = new stackUsingArray();
		
		System.out.println(st.size());    // 0
		System.out.println(st.isEmpty());  // true 
		
		st.push(10);
		st.push(11);		
		System.out.println(st.size());   // 2
		System.out.println(st.isEmpty());   // false
		st.push(12);
		st.push(16);
		st.push(18);
		st.push(20);
		System.out.println(st.size());    // 6
		System.out.println(st.isEmpty());  // false
		
		System.out.println(st.top());     // 20
		System.out.println(st.pop());     // 20
		System.out.println(st.top());     // 18
		
		System.out.println(st.size());     // 5
		
		System.out.println(st.pop());     // 18
		System.out.println(st.pop());     // 16
		System.out.println(st.pop());     // 12
		System.out.println(st.pop());     // 11
		System.out.println(st.pop());     // 10
		//System.out.println(st.pop());     // StackEmptyException
		//System.out.println(st.pop());     // StackEmptyException
		//System.out.println(st.top());     // StackEmptyException
		
		System.out.println(st.size());     // 0
		System.out.println(st.isEmpty());  // true
		*/
		
		
		stackUsingLL st = new stackUsingLL();
		

		System.out.println(st.size());    // 0
		System.out.println(st.isEmpty());  // true 
		
		st.push(10);
		st.push(11);		
		System.out.println(st.size());   // 2
		System.out.println(st.isEmpty());   // false
		st.push(12);
		st.push(16);
		st.push(18);
		st.push(20);
		System.out.println(st.size());    // 6
		System.out.println(st.isEmpty());  // false
		
		System.out.println(st.top());     // 20
		System.out.println(st.pop());     // 20
		System.out.println(st.top());     // 18
		
		System.out.println(st.size());     // 5
		
		System.out.println(st.pop());     // 18
		System.out.println(st.pop());     // 16
		System.out.println(st.pop());     // 12
		System.out.println(st.pop());     // 11
		System.out.println(st.pop());     // 10
		//System.out.println(st.pop());     // StackEmptyException
		//System.out.println(st.pop());     // StackEmptyException
		//System.out.println(st.top());     // StackEmptyException
		
		System.out.println(st.size());     // 0
		System.out.println(st.isEmpty());  // true
		
		

	}

}
