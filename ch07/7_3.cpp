//Revise your transaction-processing program from ¡ì 7.1.1 (p.256) to use these members.
#include<iostream>
#include"Sales_item.h"
using namespace std;

class Sales_data
{
private:
	string bookNo;
	unsigned units_sold = 0;
	double sellingprice = 0.0;
	double saleprice = 0.0;
	double discount = 0.0;
public:
	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data &rhs)
	{
		units_sold += rhs.units_sold;
		saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold)
			/ (rhs.units_sold + units_sold);
		if (sellingprice != 0)
		{
			discount = saleprice / sellingprice;
		}
		return *this;
	}
};

int main()
{
	Sales_data total;
	if (cin >> total)
	{
		Sales_data trans;
		while (cin >> trans)
		{
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				cout << total << endl;
				total = trans;
			}

		}
		cout << total << endl;

	}
	else
	{
		cerr << "No data!" << endl;
		return -1;
	}
	return 0;
}