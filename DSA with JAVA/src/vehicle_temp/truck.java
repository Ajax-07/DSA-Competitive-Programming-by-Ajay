 package vehicle_temp;

import OOPS_5.vehicle;

public class truck extends vehicle{
	public int capacity;
	
	public truck() {
		super(200);
	}
	
	public void print() {
		
		super.print();
		color  = " yellow";
		System.out.println("capacity of truck " + capacity);
		System.out.println("capacity of truck " + color);
	}
	
	public boolean isMoterized() {
		return true;
	}
	
	public String getCompany() {
		return "abc";
	}
}
