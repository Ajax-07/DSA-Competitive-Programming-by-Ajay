package prioritry_Queue_15;

public class priorityQueueUse {

	public static void main(String[] args) {
		priorityQueue pq = new priorityQueue();
		
		System.out.println(pq.isEmpty()); // true
		System.out.println(pq.size());    // 0
		
		pq.insert(7);
		pq.insert(3);
		pq.insert(2);
		pq.insert(5);
		pq.insert(1);
		pq.insert(8);
		pq.insert(9);
		pq.insert(4);
		
		System.out.println(pq.isEmpty()); // false
		System.out.println(pq.size());    // 8
		System.out.println(pq.getMin());  // 1
		System.out.println(pq.delete());  // 1
		System.out.println(pq.getMin());  // 2
		System.out.println(pq.delete());  // 2
		System.out.println(pq.getMin());  // 3
		System.out.println(pq.delete());  // 3
		System.out.println(pq.delete());  // 4
		System.out.println(pq.delete());  // 5
		System.out.println(pq.delete());  // 7
		System.out.println(pq.delete());  // 8
		System.out.println(pq.getMin());  // 9
		System.out.println(pq.delete());  // 9
		System.out.println(pq.getMin());  // -1
		System.out.println(pq.isEmpty());  // true
		System.out.println(pq.size());  // 0 
		

	}

}
