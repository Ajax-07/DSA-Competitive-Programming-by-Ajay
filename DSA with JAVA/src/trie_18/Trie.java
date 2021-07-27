package trie_18;

import java.util.ArrayList;

// Trie Implementation

class trieNode{
	 public char data;
	 public boolean isTem;
	 public trieNode child[];
	 
	 public trieNode(char data) {
		 this.data = data;
		 isTem = false;
		 child = new trieNode[26];
		 for(int i=0; i<26; i++)
			child[i] = null;
	 }
}
public class Trie {
	private trieNode root;
	private int Size;
	
	public Trie() {
		root = new trieNode('\0');
		Size = 0;
	}
	
	// insert a word
	private void add(trieNode root, String word) {
		
		if(word.length() == 0) {
			root.isTem = true;
			return;
		}
		
		int index = word.charAt(0) - 'a';
		trieNode child = root.child[index];
		if(child == null) {
			child = new trieNode(word.charAt(0));
			root.child[index] = child;
		}
		
		add(child,word.substring(1));
	}
	public void add(String word) {
		add(root, word);
		Size++;
	}
	
	// delete a word
	private void delete(trieNode root, String word) {
		if(word.length() == 0) {
			root.isTem = false;
			return;
		}
		
		int index = word.charAt(0)-'a';
		trieNode child = root.child[index];
		if(child == null) {
			return;
		}
		delete(child, word.substring(1));
		
		if(!child.isTem) {
			for(int i=0 ;i<26; i++)
				if(child.child[i] != null)
					return;
			root.child[index] = null;
			child = null;
		}
	}
	public void delete(String word) {
		delete(root, word);
		Size--;
	}
	
	// search a word
	private boolean search(trieNode root, String word) {
		if(word.length() == 0 ) {
			 return root.isTem;
		}
		
		int index = word.charAt(0)-'a';
		trieNode child = root.child[index];
		if(child == null)
			return false;
		return search(child, word.substring(1));
	}
	public boolean search(String word) {
		return search(root,word);
	}
	
	public  int size() {
		return Size;
	}
	
	// autocomplete
	private void put(trieNode root, String word, String temp,ArrayList<String> words) {
		
		if(word.length() == 0) {
			for(int i=0; i<26; i++) {
				word += root.child[i].data;
				if(root.child[i] != null)
				   put(root.child[i],word, temp, words);
			}
			return;
		}
		
		int index = word.charAt(0) - 'a';
		trieNode child = root.child[index];
		if(child == null)
			return;
		temp = temp+word.charAt(0);
		if(child.isTem) {
			words.add(temp);
		}
		put(child,word.substring(1), temp, words);
		
	}
	public void suggest(String word) {
		ArrayList<String> words = new ArrayList<>();
		String temp = "";
		put(root, word, temp,words);
		
		for(String item : words)
			System.out.println(item);
	}
	
}
