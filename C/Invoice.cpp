#include "Invoice.h"
#include "Date.h"
#include<sstream>

Invoice::Invoice(Date d, string num, string des, int q, float p) {
	setDateOrdered(d);
	setPartNumber(num);
	setDescription(des);
	setQuantity(q);
	setPrice(p);
}

Date Invoice::getDateOrdered() {
	return dateOrdered;
}

string Invoice:: getPartNumber() {
	return partNumber;
}

string Invoice:: getDescription() {
	return description;
}

int Invoice::getQuantity() {
	return quantity;
}

float Invoice::getPrice() {
	return price;
}

void Invoice::setDateOrdered(Date newDate) {
	dateOrdered = newDate;
}

void Invoice::setPartNumber(string newNum) {
	if(newNum != " ") {
		partNumber = newNum;
	}
	else {
		cout << "Invalid partNumber. partNumber cannot be the empty string." << endl;
		cout << "Please enter a valid partNumber: " << endl;
		cin >> newNum;
	}
}

void Invoice::setDescription(string newDes) {
	if(newDes != " ") {
		description = newDes;
	}
	else {
		cout << "Invalid description. description cannot be the empty string." << endl;
		cout << "Please enter a valid description: " << endl;
		cin >> newDes;
	}

}	

void Invoice::setQuantity(int newQ) {
	if(newQ >= 0) {
		quantity = newQ;
	}
	else {
		cout << "Invalid quantity. Quantity cannot be negative" << endl;
		cout << "Please enter a valid quantity: " << endl;
		cin >> newQ;
	}
}

void Invoice::setPrice(float newPrice) {
	if(newPrice > 0) {
	 	price = newPrice;
	}
	else {
		cout << "Invalid price. Price cannot be zero or negative" << endl;
		cout << "Please eneter a valid price: " << endl;
		cin >> newPrice;	
	}
}

string Invoice::toString() {
	string answer="";
	stringstream convert1;
	convert1 << quantity;

	stringstream convert2;
	convert2 << price;

        answer="incoice"+partNumber;
	//answer = answer + "Invoice:\t" << dateOrdered << "\n" << "Part:\t" << partNumber << "\t" << description << "\n" << "Quantity:\t" << setw(3) << convert1.str() << "\t" << "Price: $ " << setprecision(2) << convert2.str() << endl;//
	
	return answer;
}
