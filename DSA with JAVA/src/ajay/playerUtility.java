package ajay;

public class playerUtility {

	public player findPlayerdetailsById(player[] arr, int playerIdToSearch) {
		for(int i=0; i<arr.length; i++) {
			if(arr[i].getPlayerId() == playerIdToSearch )
				 return arr[i];
		}
		
		return null;
	}
	
}
