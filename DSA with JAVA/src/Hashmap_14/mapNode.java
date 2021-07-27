package Hashmap_14;

public class mapNode<K,V> {
	public K key;
	public V value;
	public mapNode<K,V> next;
	
	public mapNode(K key, V value) {
		this.key = key;
		this.value = value;
		next = null;
	}
}
