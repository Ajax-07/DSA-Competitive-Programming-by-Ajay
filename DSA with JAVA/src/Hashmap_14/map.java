package Hashmap_14;

import java.util.ArrayList;

public class map<K,V> {
	 private ArrayList<mapNode<K,V>> bucket;
	 private int bucketSize;
	 private int bucketCap;
	 
	 public map() {
		 bucketCap = 5;
		 bucket = new ArrayList<>(bucketCap);
		 for(int i=0; i<bucketCap; i++) {
			 bucket.add(null);
		 }
		 bucketSize = 0;
	 }
	 
	 private void rehashing() {
		 bucketCap *= 2;
		 ArrayList<mapNode<K,V>> temp = bucket;
		 bucket = new ArrayList<>(bucketCap);
		 for(int i=0; i<bucketCap; i++) {
			 bucket.add(null);
		 }
		 bucketSize = 0;
		 for(int i=0; i<temp.size(); i++) {
			 mapNode<K,V> head = temp.get(i);
			 while(head!=null) {
				 insert(head.key, head.value);
				 head = head.next;
			 }
		 }
		
	 }
	 
	 private int hashFunction(K key) {
		 int hashCode = key.hashCode();
		 
		 // or
		 /*
		 int p = 37;
		 int hashCode=0;
		 int i=0; 
		 String s = (String)key;
		 while(i<s.length()) {
			 hashCode += (s.charAt(i)*p*Math.pow(10, i))%bucketCap;
			 i++;
		 }
		 */
		 
		 
		 return hashCode%bucketCap;
	 }
	 
	 
	 public void insert(K key, V value) {
		 int bucketIndex = hashFunction(key);
		 mapNode<K,V> head = bucket.get(bucketIndex);
		 while(head != null) {
			 if(head.key.equals(key)) {
				 head.value = value;
				 return;
			 }
			 head = head.next;
		 }
		 
		 head = bucket.get(bucketIndex);
		 mapNode<K,V> newNode = new mapNode<>(key,value);
		 newNode.next = head;
		 bucket.set(bucketIndex, newNode);
		 
		 bucketSize++;
		 double loadFactor = bucketSize/bucketCap ;
		 if(loadFactor > (0.7)) {
			 rehashing();
			 System.out.println("Rehashing" + loadFactor);

		 }
	 }
	 public V getVlue(K key) {
		 int bucketIndex = hashFunction(key);
		 mapNode<K,V> head = bucket.get(bucketIndex);
		 while(head != null) {
			 if(head.key.equals(key)) {
				 return head.value;
			 }
			 head = head.next;
		 }
		 
		 return null;
	 }
	 
	 public int size() {
		 return bucketSize;
	 }
	 
}
