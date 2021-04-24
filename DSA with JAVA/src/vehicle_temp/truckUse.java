package vehicle_temp;


public class truckUse {
	public static void main(String [] args) {
		truck t = new truck();
		
		t.capacity = 1500;
		//t.color = "yellow"; protected property is not accessible rather than child class
		
		t.print();
	}
}
