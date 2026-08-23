import java.util.*;

class ArraySortAsc{

	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);

		int arr[] = new int[5];
	
		System.out.println("Enter the integers:");

		for(int i = 0; i < 5; i++){
			arr[i] = sc.nextInt();
	}	

			Arrays.sort(arr);
			System.out.println("Array: " + Arrays.toString(arr));
			//System.out.println("Largest= "+arr[arr.length - 1] );
}

}