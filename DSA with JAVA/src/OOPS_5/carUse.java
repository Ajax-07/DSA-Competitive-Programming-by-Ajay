package OOPS_5;

public class carUse {

	public static void main(String[] args) {
		
		vehicle v = new vehicle(100);
		v.color = "red";
		//v.maxSpeed = 180;
		v.setmaxSpeed(100);
//		System.out.println(v.color);
//		System.out.println(v.getmaxSpeed());
//		v.print();
		
		
		car c = new car(6,100);
//		c.print();
		
		c.color = "black";
		//c.maxSpeed = 180;
		c.setmaxSpeed(180);
		c.numGears = 5;
		c.isConvertible = true;
		
//		System.out.println(c.color);
//		//System.out.println(c.maxSpeed);
//		System.out.println(c.getmaxSpeed());
//		System.out.println(c.numGears);
//		System.out.println(c.isConvertible);
//		
//		c.print();
		
		vehicle v2 = new car(10,200);
		
		v2.color = "red";
		//v2.numGears; //error
	}

}
