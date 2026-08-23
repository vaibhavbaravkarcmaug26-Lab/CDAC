class Even{

	void printEvenNumbers(){
	
		int num = 1;
		while(num<=50){
			if(num % 2==0){
			System.out.println(num);
		}
			num++;
	}

}

	public static void main(String[] args){

			Even obj = new Even();
			obj.printEvenNumbers();
  
   }

}