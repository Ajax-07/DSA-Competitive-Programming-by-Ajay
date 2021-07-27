package trie_18;

import java.util.Scanner;

public class autocomplete {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		Trie t = new Trie();
		t.add("notes");
		t.add("not");
		t.add("note");
		t.add("no");
		t.add("nota");
		t.add("nock");
		t.add("notch");
		
		String word = sc.next();
		t.suggest(word);
	}

}
