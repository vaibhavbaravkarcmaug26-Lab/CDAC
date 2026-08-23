import java.util.*;

class Array{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int arr[] = new int[5];

		System.out.println("Enter the values");

		for(int i = 0; i<5; i++){

			arr[i] = sc.nextInt();

	}

		for (int x : arr) {
            		System.out.print(x + " ");
	
	}

  }

}