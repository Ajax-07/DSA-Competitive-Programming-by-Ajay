package prioritry_Queue_15;

import java.util.ArrayList;
import java.util.Collections;

public class priorityQueue {
	private ArrayList<Integer> heap;
	
	
	public priorityQueue() {
	    heap = new ArrayList<>();
	}
	
	// heapify
	private void up_heapify() {
		int childIndex = heap.size()-1;
		int parentIndex = (childIndex - 1)/2;
		
		while(parentIndex >= 0 && heap.get(parentIndex) > heap.get(childIndex) ) {
			Collections.swap(heap, childIndex, parentIndex);
			childIndex = parentIndex;
			parentIndex = (childIndex-1)/2;
		}
		
		return;
				
	}
	
	private void down_heapify() {
		int parentIndex = 0;
		int leftChildIndex = 1;
		int rightChildIndex = 2;
		int n = heap.size();
		int minIndex = parentIndex;
		while( leftChildIndex<n) {
			
			if(heap.get(minIndex) > heap.get(leftChildIndex))
				minIndex = leftChildIndex;
			if(rightChildIndex<n && heap.get(minIndex) > heap.get(rightChildIndex))
				minIndex = rightChildIndex;
			if(minIndex == parentIndex )
				break;
			else {
				Collections.swap(heap, parentIndex, minIndex);
				parentIndex = minIndex;
				leftChildIndex = parentIndex*2+1;
				rightChildIndex = parentIndex*2+2;
			}

		}
		return ;
	}
	
	// check if empty
	public boolean isEmpty() {
		return heap.size() == 0;
	}
	
	// get size
	public int size() {
		return heap.size();	
	}
	
	// get element
	
	public int getMin() {
		if(isEmpty()) {
			return -1;
		}
		return heap.get(0);
	}
		
	// insert
	public void insert(int data) {
		heap.add(data);
		up_heapify();
	}
	
	// delete
	public int delete() {
		if(isEmpty()) {
			return -1;
		}
		
		Collections.swap(heap, 0,heap.size()-1);
		int temp = heap.get(heap.size()-1);
		heap.remove(heap.size()-1);
		down_heapify();
		return temp;
	}
 
}
