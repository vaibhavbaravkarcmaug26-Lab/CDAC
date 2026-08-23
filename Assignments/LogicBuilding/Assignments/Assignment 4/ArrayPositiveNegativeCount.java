import java.util.*;

class ArrayPositiveNegativeCount{

	public static void main(String[] args){

	Scanner sc = new Scanner(System.in);
	int arr[] = new int[5];

	System.out.println("Enter the values:");

	for(int i =0; i < 5; i++){

		arr[i]	= sc.nextInt();	

	}

	int count1 = 0;
	int count2 = 0;
	int count3 = 0;		

	for(int i = 0; i < 5; i++){

		if(arr[i]>0){
			count1 = count1 + 1;
		}
		if(arr[i]==0){
			count3 = count3 + 1;
		}
		else{
			count2 = count2 + 1;
		}	
	
	}
		System.out.println("Positive Numbers Count="+count1);
		System.out.println("Negative Numbers Count="+count2);
		System.out.println("Zeros Count="+count3);

}

}