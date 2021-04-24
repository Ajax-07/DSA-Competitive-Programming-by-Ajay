package exceptionHandling_6;


public class fractionUse {
	
	public static void temp() throws zeroDenoException {
		fraction f = new fraction(20,30);
		
		f.setNumerator(100); 
		f.setDenominator(0);
	}

	public static void main(String[] args) {
		
		try {
			temp();
		}catch(zeroDenoException e){
		   System.out.println("0 cannot be denomitator !");	
		}
		
		
	}

}
