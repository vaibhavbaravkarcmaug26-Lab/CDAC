import java.util.*;

class AvgArray{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		int arr[] = new int[5];

		for(int i = 0; i < 5; i++){
			arr[i] = sc.nextInt();

	}
		int sum = 0;
		for(int x : arr){
			sum = sum + x;
	}
		double avg = (double)sum/arr.length;
		System.out.println(avg);

  }

}