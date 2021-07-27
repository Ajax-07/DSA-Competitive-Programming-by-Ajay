package Graph_16;

import java.util.Scanner;

public class GraphDFS {
	
	public static void printHelper(int edges[][], int sv, boolean visited[]) {
		System.out.println(sv);
		visited[sv] = true;
		
		for(int i=0; i<edges.length; i++) {
			if(edges[sv][i]==1 && !visited[i])
				printHelper(edges, i, visited);
		}
	}
	
	public static void print(int edges[][]) {
		boolean visited[] = new boolean[edges.length];
		
		for(int i=0; i<edges.length; i++) {
			if(!visited[i])
				printHelper(edges, i, visited);
		}
		
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int v = sc.nextInt();
		int e = sc.nextInt();
		int edges[][] = new int[v][v];
		
		for(int i=0; i<e; i++) {
			int sv = sc.nextInt();
			int ev = sc.nextInt();
			edges[sv][ev] = 1;
		}
		
		print(edges);
	}

}
