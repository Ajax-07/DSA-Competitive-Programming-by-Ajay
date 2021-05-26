package Tree_11;

public class treeUse {

	public static void main(String[] args) {
		treeNode<Integer> root = new treeNode<>(10);
		treeNode<Integer> node1 = new treeNode<>(20);
		treeNode<Integer> node2 = new treeNode<>(30);
		treeNode<Integer> node3 = new treeNode<>(40);
		treeNode<Integer> node4 = new treeNode<>(50);
	    
		root.children.add(node1);
		root.children.add(node2);
		root.children.add(node3);
		
		node2.children.add(node4);
		
		System.out.println(root.data);
		for(int i=0; i<root.children.size(); i++)
			System.out.println(root.children.get(i).data);
	}

}
