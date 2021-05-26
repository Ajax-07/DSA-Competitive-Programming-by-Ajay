package Stack_Queue_10;
import java.util.LinkedList;
import java.util.Queue;

public class queueCollection {

	public static void main(String[] args) {
		Queue<Integer> q = new LinkedList<>();
		q.add(10);
		q.add(20);
		q.add(30);
		q.add(40);
		
		
		System.out.println(q.isEmpty());   // false
		System.out.println(q.size());      // 4
		System.out.println(q.poll());      // 10   removed
		System.out.println(q.remove());    // 20  removed
		System.out.println(q.peek());     // 30 front
		System.out.println(q.remove());   // 30 
		System.out.println(q.element());   // 40 front
		q.offer(50);   // 50 pushed
		
		System.out.println(q.size());   // 2
		System.out.println(q.remove());   // 40
		System.out.println(q.remove());   //  50
		//System.out.println(q.remove());   // Exception
		System.out.println(q.size());   // 0
		System.out.println(q.isEmpty());   // true
		
	}

}
