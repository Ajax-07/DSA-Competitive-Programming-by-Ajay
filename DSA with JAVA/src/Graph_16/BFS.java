package Graph_16;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class BFS {
	
	public static void helper(int edges[][], int sv, boolean visited[]) {
		
		Queue<Integer> pending = new LinkedList<>();
		
		pending.add(sv);
		visited[sv]=true;
		
		while(!pending.isEmpty()) {
			int front = pending.poll();
			
			System.out.print(front + " ");
			
			for(int j=0; j<edges.length; j++)
				if(edges[sv][j] == 1 && !visited[j]) {
					pending.add(j);
					visited[j]=true;
				}
		}
	}
	
	public static void print(int edges[][]) {
		boolean visited[] = new boolean[edges.length];
		
		for(int i=0; i<edges.length; i++) {
			if(!visited[i]) {
				helper(edges, i, visited);
			}
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
