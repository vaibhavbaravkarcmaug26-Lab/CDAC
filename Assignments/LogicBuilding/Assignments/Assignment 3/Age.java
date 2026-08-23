import java.util.*;
class Age{


	void checkAgeCategory(int age){

		if(age>=18 && age<=58){
			System.out.println("You are an adult");		
		}
		else if(age>58){
			System.out.println("You are a senior citizen");	
		}		
		else{
		     System.out.println("You are a minor");	
		}
	}


	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);	
		System.out.println("Enter the age:");	
		int age = sc.nextInt();

		Age obj = new Age();
		obj.checkAgeCategory(age); 	

  }

}