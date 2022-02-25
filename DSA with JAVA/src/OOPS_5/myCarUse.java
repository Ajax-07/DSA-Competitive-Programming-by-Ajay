package OOPS_5;

public class myCarUse {
	public static void main(String [] args) {
		myCar  c1 = new myCar();
		
		System.out.println(c1.name);
		System.out.println(c1.getCarNum());
		System.out.println(c1.getColor());
		
		c1.setCarNum(7777);
		c1.setColor("White");
	
		System.out.println(c1.getCarNum());
		System.out.println(c1.getColor());
		
		// also we can set data using constructor
		
		myCar c2 = new myCar(1234, "Grey");
		
		System.out.println(c2.getCarNum());
		System.out.println(c2.getColor());
		
		
	}
}
