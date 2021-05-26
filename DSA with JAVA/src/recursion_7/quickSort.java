package recursion_7;

import java.util.Scanner;

public class quickSort {
	
	  public static void Swap(int [] arr, int i, int j) {
		  int temp = arr[i];
		  arr[i] = arr[j];
		  arr[j] = temp;
	  }
	
	// if we choose middle element as pivote
		public static int partition3(int [] arr, int l, int r) {
			int pivot = arr[(l+r)/2];
			int pi = 0;
			int i=l;
			while(i<=r) {
				if(i == (l+r)/2) {
					i++;
					continue;
				}
				if(arr[i]<= pivot)
					pi++;
				i++;
			}
			
			Swap(arr, pi+l,(r+l)/2);
		    
		    i=l; int j = r;
		    while(i<(pi+l) && j>(pi+l)) {
		    	if(arr[i]<=pivot)
		    		i++;
		    	else if(arr[j] > pivot)
		    		j--;
		    	else {
		    		Swap(arr, i, j);
		    		i++; j--;
		    	}
		    }
		    
		    return pi+l;
			
		}
		
	
	//if we choose last element as pivot
	public static int partition2(int [] arr, int l, int r) {
		/*
		int pivot = arr[r];
		int pi = 0;
		int i = l;
		while(i<r) {
			if(arr[i] <= pivot)
				pi++;
		    i++;	
		}
		
		Swap(arr, pi+l, r);
		
		 i=l; int j=r;
		 while(i<(pi+l) && j>(pi+l)) {
			 if(arr[i] < pivot)
				 i++;
			 else if(arr[j]>pivot)
				 j--;
			 else {
				 Swap(arr, i, j);
				 i++; j--;
			 }
		 }
		 
		return pi+l;
		*/
	// ........................... OR ............................... 
		int pivot = arr[r];
		
		int i=l-1;
		
		for(int j=l; j<r; j++) {
			if(arr[j]<=pivot) {
				i++;
				Swap(arr,i,j);
			}
		}
		
		Swap(arr,i+1,r);
		
		return i+1;
	}
	
	
	//if we choose first element as pivot
	public static int partition1(int [] arr, int l, int r) {
		/*
		int pivot = arr[l];
		int pi=0;
		int i=l+1;
		while(i<=r) {
			if(arr[i] <= pivot)
				pi++;
			i++;
		}
		
		Swap(arr, l, pi+l);
		
		i = l;
		int j=r;
		while(i<(pi+l) && j>(pi+l)) {
			
			if(arr[i] <= pivot) {
				i++;
			}else if(arr[j]>pivot) {
				j--;
			}else{
					Swap(arr, i, j);
				  	i++; j--;
			 }
			
		}
		
		return pi+l;
		*/
		
		//.................OR............
		int pivot = arr[l];
		int i=r+1;
		for(int j=r; j>l; j--) {
			if(arr[j] > pivot) {
				i--;
				Swap(arr,i,j);
			}
		}
		
		Swap(arr, i-1,l);
		
		return i-1;
		
	}
	
	public static void sort(int [] arr, int l, int r) {
		if(l>=r)
			return;
		
		int pivotPos = partition1(arr, l, r);
	//	int pivotPos = partition2(arr, l, r);
	//	int pivotPos = partition3(arr, l, r);
		
		sort(arr, l, pivotPos-1);
		sort(arr, pivotPos+1, r);
	}

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int [] arr = new int[n];
		
		for(int i=0; i<n; i++) {
			arr[i] = sc.nextInt();
		}
		
		sort(arr, 0, n-1);
		
		for(int i=0; i<n; i++)
			System.out.print(arr[i] + " ");

	}

}
