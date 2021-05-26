package linkedList_9;
import java.util.LinkedList;
public class collectionLL {
	public static void main(String [] args) {
		LinkedList<Integer> list = new LinkedList<>();
		System.out.println(list.size());
		
		list.add(100);
		list.add(200);
		list.add(300);
		list.add(400);
		list.addFirst(500);
		list.addLast(600);
		list.set(2, 9999);
		System.out.println(list.size());
	     
		for(int i=0; i<list.size(); i++)
			System.out.print(list.get(i) + " ");
	}
}
