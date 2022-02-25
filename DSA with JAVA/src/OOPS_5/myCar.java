package OOPS_5;

public class myCar {
	public String name;
	private int carNum;
	private String color;
	
	
	// default constructor
	public myCar() {
		this.name = "Audi";
		this.carNum = 0; 
		this.color = "Black";
	}
	
	// parameterized constructor
	public myCar(int carNum, String color) {
		this.carNum = carNum;
		this.color = color;
	}
	
	// setter for carNum
	public void setCarNum(int carNum) {
		this.carNum = carNum;
	}
	
	
	// getter for carNum
	public int getCarNum() {
		return carNum;
	}
	
	
	// setter for color
	public void setColor(String color) {
		this.color = color;
	}
	
	// getter for color
	public String getColor() {
		return color;
	}
	
}
