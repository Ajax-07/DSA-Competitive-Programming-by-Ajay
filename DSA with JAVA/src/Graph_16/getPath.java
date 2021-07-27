package Graph_16;

import java.util.ArrayList;
import java.util.Scanner;

public class getPath {
	
	public static void getPath(int edges[][], int sv, int ev, ArrayList<Integer> path, boolean visited[]) {
		if(sv == ev) {
			path.add(ev);
			return;
		}
		visited[sv]=true;
		for(int i=0; i<edges.length; i++) {
			if(edges[sv][i] == 1 && !visited[i]) {
				getPath(edges, i, ev, path, visited);
				if(path.size() != 0) {
					path.add(sv);
					return;
				}
				
			}
		}
		
		return;
		
		
	}
	
	public static ArrayList<Integer> getPath(int edges[][], int sv, int ev){
		ArrayList<Integer> path = new ArrayList<>();
		
		boolean visited[] = new boolean[edges.length];
		getPath(edges, sv, ev, path, visited);
		return path;
		
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
		
		ArrayList<Integer> ans = getPath(edges ,firstV, lastV);
		for(int x : ans)
			System.out.print(x + " ");
	}

}
