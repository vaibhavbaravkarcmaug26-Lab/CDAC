//============================================================================
// Name        : 1.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;


class Product{

private:
	int productId;
	string name;
	double price;
	int quantity;

public:

	Product(){

		productId = 0;
		name = "";
		price = 0;
		quantity = 0;
	}

	Product(int productID , string name , double price , int quantity){

		this->productId = productId;
		this->name = name;
		this->price = price;
		this->quantity = quantity;
	}

	void acceptDetails(){

		cout<<"Enter productId : "<<endl;
		cin>>productId;

		cout<<"Enter Product Name : "<<endl;
		cin>>name;

		cout<<"Enter Product Price : "<<endl;
		cin>>price;

		cout<<"Enter Product Quantity : "<<endl;
		cin>>quantity;
	}

	void displayDetails() const{

		cout<<"Product ID : "<<productId<<endl;
		cout<<"Product Name : "<<name<<endl;
		cout<<"Product Price : "<<price<<endl;
		cout<<"Product Quantity : "<<quantity<<endl;
	}

	double totalValue() const{

		return price * quantity;
	}

	bool isLowStock(int threshold) const{

		return quantity < threshold;
	}

};


//====================== PART B ======================

double reorderCost(int qty, double unitPrice){

	return qty * unitPrice;
}


double reorderCost(double qty, double unitPrice){

	return qty * unitPrice;
}


double reorderCost(int qty, double unitPrice, double taxRate){

	double cost = qty * unitPrice;

	return cost + (cost * taxRate / 100);
}


double applyDiscount(double price, double discountPercent = 10.0){

	return price - (price * discountPercent / 100);
}


//======================================================


int main() {

//	Product prd ;

	Product products[5];


//	prd.acceptDetails();

//	prd.displayDetails();

//	prd.totalValue();

	for(int i =0 ; i < 5;i++){

		cout << "\nEnter Product " << i + 1 << " Details:" << endl;

		products[i].acceptDetails();
	}


	for(int i = 0; i < 5; i++){

		cout << "\nProduct " << i + 1 << " Details:" << endl;

		products[i].displayDetails();
	}


	double maxvalue = 0 ;


	for(int i = 0; i < 5; i++){

		if(products[i].totalValue() > maxvalue){

			maxvalue = products[i].totalValue();
		}

	}

	cout << "\nHighest Total Value : " << maxvalue << endl;


	int maxIndex = 0;


	for(int i = 0; i < 5; i++){

		if(products[i].totalValue() == maxvalue){

			maxIndex = i;
		}

	}


	cout << "\nHighest Value Product Details :" << endl;

	products[maxIndex].displayDetails();


	int threshold;

	cout<<"Enter threshold value :"<<endl;

	cin>>threshold;


	for(int i = 0; i < 5; i++) {

	    if(products[i].isLowStock(threshold)) {

	        products[i].displayDetails();
	    }

	}


	//================ PART B CALLS =================

	cout << "\nReorder Cost (Integer Quantity) : "
		 << reorderCost(10, 100.0) << endl;


	cout << "Reorder Cost (Fractional Quantity) : "
		 << reorderCost(10.5, 100.0) << endl;


	cout << "Reorder Cost With Tax : "
		 << reorderCost(10, 100.0, 18.0) << endl;


	cout << "Discounted Price : "
		 << applyDiscount(1000) << endl;


	return 0;

}
