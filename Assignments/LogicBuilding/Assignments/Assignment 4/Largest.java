import java.util.*;

class Largest{

	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);

		int arr[] = new int[4];
	
		System.out.println("Enter the integers:");

		for(int i = 0; i < 4; i++){
			arr[i] = sc.nextInt();
	}	

			Arrays.sort(arr);
			System.out.println("Array: " + Arrays.toString(arr));
			System.out.println("Largest= "+arr[arr.length - 1] );
}

}