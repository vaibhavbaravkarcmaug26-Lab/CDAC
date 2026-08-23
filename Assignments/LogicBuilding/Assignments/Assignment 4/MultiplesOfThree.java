import java.util.*;
class MultiplesOfThree{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number:");
		int n = sc.nextInt();

		for(int i = 3; i<= n; i = i + 3){
			System.out.print(+i+" ");
	}

 }

}