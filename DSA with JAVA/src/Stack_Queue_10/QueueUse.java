package Stack_Queue_10;

public class QueueUse {

	public static void main(String[] args) throws QueueEmptyException {
		/*
		
		queueUsingArray q = new queueUsingArray();
		
		System.out.println(q.isEmpty());  // True
		System.out.println(q.size());      // 0
		
		q.enqueue(10);
		q.enqueue(20);
		System.out.println(q.isEmpty());   //  false
		System.out.println(q.size());      // 2
		
		q.enqueue(30);
		q.enqueue(40);
		System.out.println(q.size());  // 4
		
		System.out.println(q.front());    // 10
		System.out.println(q.dequeue());   // 10
		System.out.println(q.dequeue());    // 20
		System.out.println(q.dequeue());    // 30
		System.out.println(q.front());      // 40
		System.out.println(q.size());     // 1
		
		q.enqueue(50);
		q.enqueue(60);
		q.enqueue(70);
		System.out.println(q.size());    // 4
		System.out.println(q.front());   //40
		
		q.enqueue(80);
		System.out.println(q.front());    // 40
		System.out.println(q.dequeue());   // 40
		System.out.println(q.dequeue());    //50
		System.out.println(q.dequeue());   // 60
		System.out.println(q.front());     // 70
		System.out.println(q.size());     // 2
		
		System.out.println(q.dequeue());    // 70
		System.out.println(q.dequeue());    // 80
		System.out.println(q.size());        // 0
		System.out.println(q.front());       // QueueEmptyException
		System.out.println(q.dequeue());    // QueueEmptyException
	
		*/
		queueUsingLL q = new queueUsingLL();
		
		
		System.out.println(q.isEmpty());  // True
		System.out.println(q.size());      // 0
		
		q.enqueue(10);
		q.enqueue(20);
		System.out.println(q.isEmpty());   //  false
		System.out.println(q.size());      // 2
		
		q.enqueue(30);
		q.enqueue(40);
		System.out.println(q.size());  // 4
		
		System.out.println(q.front());    // 10
		System.out.println(q.dequeue());   // 10
		System.out.println(q.dequeue());    // 20
		System.out.println(q.dequeue());    // 30
		System.out.println(q.front());      // 40
		System.out.println(q.size());     // 1
		
		q.enqueue(50);
		q.enqueue(60);
		q.enqueue(70);
		System.out.println(q.size());    // 4
		System.out.println(q.front());   //40
		
		q.enqueue(80);
		System.out.println(q.front());    // 40
		System.out.println(q.dequeue());   // 40
		System.out.println(q.dequeue());    //50
		System.out.println(q.dequeue());   // 60
		System.out.println(q.front());     // 70
		System.out.println(q.size());     // 2
		
		System.out.println(q.dequeue());    // 70
		System.out.println(q.dequeue());    // 80
		System.out.println(q.size());        // 0
		System.out.println(q.front());       // QueueEmptyException
		System.out.println(q.dequeue());    // QueueEmptyException
	
	}

}
