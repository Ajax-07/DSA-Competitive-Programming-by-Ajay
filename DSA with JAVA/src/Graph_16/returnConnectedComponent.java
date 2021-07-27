package Graph_16;

import java.util.ArrayList;
import java.util.Scanner;

public class returnConnectedComponent {
	
	
	public static void connectedCompontent(int [][] edges, int sv, boolean visited[], ArrayList<Integer> component){
		visited[sv] = true;
		component.add(sv);
		for(int i=0; i<edges.length; i++) {
			if(edges[sv][i] == 1 && !visited[i])
				connectedCompontent(edges, i, visited, component);
		}
	}
	
	public static ArrayList<ArrayList<Integer>> connectedCompontent(int [][] edges){
		boolean visited[] = new boolean[edges.length];
	
		ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
		
		for(int i=0; i<edges.length; i++) {
			ArrayList<Integer> component = new ArrayList<>();
			if(!visited[i]) {
				 connectedCompontent(edges, i,visited, component);
			}
			ans.add(component);
		}
		return ans;
		
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
		
		 ArrayList<ArrayList<Integer>> ans = connectedCompontent(edges);
		 for(int i=0; i<ans.size(); i++) {
			 for(int j=0; j<ans.get(i).size(); j++)
				 System.out.print(ans.get(i).get(j) + " ");
			 System.out.println();
		 }
				 
		
	}

}
