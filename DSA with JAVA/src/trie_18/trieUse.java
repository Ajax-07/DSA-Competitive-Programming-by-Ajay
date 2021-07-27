package trie_18;

public class trieUse {

	public static void main(String[] args) {
		Trie t = new Trie();
		t.add("ajay");
		t.add("kumar");
		t.add("sachin");
		t.add("yadav");
		t.add("computer");
		t.add("science");
		t.add("note");
		t.add("not");
		
		System.out.println(t.size());
		System.out.println(t.search("computer"));
		System.out.println(t.search("yadav"));
		t.delete("yadav");
		t.delete("computer");
		t.delete("science");
		t.delete("note");
		System.out.println(t.search("yadav"));
		System.out.println(t.search("computer"));
		System.out.println(t.search("science"));
		System.out.println(t.search("note"));
		System.out.println(t.search("not"));
		System.out.println(t.size());
	}

}
