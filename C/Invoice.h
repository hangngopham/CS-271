#ifndef INVOICE_H
#define INVOICE_H
#include "Date.h"
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Invoice {
	public:
		Invoice(Date, string, string, int, float);

		Date getDateOrdered();
		string getPartNumber();
		string getDescription();
		int getQuantity();
		float getPrice();
	
		void setDateOrdered(Date);
		void setPartNumber(string);
		void setDescription(string);
		void setQuantity(int);
		void setPrice(float);

		string toString();


	private:
		Date dateOrdered;
		string partNumber;
		string description;
		int quantity;
		float price;
};

#endif

