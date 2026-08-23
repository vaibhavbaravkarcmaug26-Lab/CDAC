import java.util.*;

class ArraySum{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		
		int arr[] = new int[5];

		System.out.println("Enter the values:");

		for(int i = 0; i < 5; i++){

                     arr[i] = sc.nextInt();
       }

		int sum = 0;

		for(int x : arr){

			sum = sum + x;
	}

		System.out.println("Sum Of Array: " + sum);

   }

}

// x---10
//x--20
//syso--10 20 