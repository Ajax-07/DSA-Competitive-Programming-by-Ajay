package Genrics_8;
//
//public class pair {
//	public int first;
//	public int second;
//	
//	public pair(int first, int second) {
//		this.first = first;
//		this.second = second;
//	}
//}

// generalize
//
//public class pair<T>{
//	public T first;
//	public T second;
//	
//	public pair(T first, T second) {
//		this.first = first;
//		this.second = second;
//	}
//}

// More Generalize

public class pair<X,Y>{
	 public X first;
	 public Y second;
	 
	 public pair(X first, Y second) {
		 this.first = first;
		 this.second = second;
	 }
}