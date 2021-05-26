package ajay;

import java.util.Scanner;

public class player {
	// provided attribute
	private int playerId;
	private String playerName;
	private int age;
	private long phoneNumber;
	
	// four arguments constructor
	player(int playerId, String playerName, int age, long phoneNumber){
		this.playerId = playerId;
		this.playerName = playerName;
		this.age = age;
		this.phoneNumber = phoneNumber;
	}
	
	//setters
	public void setPlayerId(int playerId) {
		this.playerId = playerId;
	}
	
	public void setPlayerName(String playerName) {
		this.playerName = playerName;
	}
	
	public void setAge(int age) {
		this.age = age;
	}
	
    public void setPhoneNumber(long phoneNumber) {
		this.phoneNumber = phoneNumber;
	}
	
	// gettes
	
	public int getPlayerId() {
		return playerId;
	}
	
	public String getPlayerName() {
		return playerName;
	}
	
	public int getAge() {
		return age;
	}
    
	public long getPhoneNumber() {
		return phoneNumber;
	}



	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int sizeOfPlayerArray = sc.nextInt();
		player [] arr = new player[sizeOfPlayerArray];
		
		for(int i=0; i<sizeOfPlayerArray; i++) {
			int playerId = sc.nextInt();
			String playerName = sc.next();
			int age = sc.nextInt();
			long phoneNumber = sc.nextLong();
			
			 arr[i] = new player(playerId, playerName, age, phoneNumber);
		}
		  //  player Array is ready [Every index of arr[] contains an player class object with 4 attributes]
		
		playerUtility pu = new playerUtility();
		
		// take playerId from user and search player details by calling below function
	    
		int playerId = sc.nextInt();
		
		player ans = pu.findPlayerdetailsById(arr, playerId);
		
		// print details
		if(ans != null) {
			System.out.println("Player Id : " + ans.getPlayerId());
			System.out.println("Name : " + ans.getPlayerName());
			System.out.println("Age : " + ans.getAge());
			System.out.println("Phone Number : " + ans.getPhoneNumber());
		}
		else System.out.println("No palyer found");
	}
	
	

}
