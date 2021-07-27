package Graph_16;

import java.util.Scanner;

public class hashPath {
	
	public static boolean checkPath(int edges[][], int sv, int ev, boolean visited[]) {
		if(sv==ev)
			return true;
		visited[sv] =true;
		for(int i=0; i<edges.length; i++) {
			if(edges[sv][i] ==1 && !visited[i]) {
				boolean ispath = checkPath(edges, i, ev, visited);
				if(ispath)
					return true;
			}
		}
	   return false;
	}
	
	public static boolean checkPath(int edges[][], int sv, int ev) {
		boolean visited[] = new boolean[edges.length];
		
		for(int i=0; i<edges.length; i++) {
			if(!visited[i]) {
				return checkPath(edges, i, ev, visited);
			}
		}
		
		return false;
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
		
		int firstV = sc.nextInt();
		int lastV = sc.nextInt();
		
		System.out.println(checkPath(edges ,firstV, lastV));

	}

}
