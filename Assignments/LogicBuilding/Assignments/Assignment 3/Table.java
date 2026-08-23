import java.util.*;
class Table{


	void printMultiplicationTable(){

	Scanner sc = new Scanner(System.in);
	System.out.println("Enter a number:");
	int n = sc.nextInt();
	for(int i =1 ; i <= 10 ; i++ ){
		int table = i*n;
		System.out.println(+n+"*"+i+"="+table);
  }

}

	public static void main(String[] args){
		
		Table obj = new Table();
		obj.printMultiplicationTable();
		

 }

}