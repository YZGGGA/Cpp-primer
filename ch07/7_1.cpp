//Write a version of the transaction-processing program from 1.6 (p. 24) using the Sales_data class you defined for the exercises in 2.6.1 (p. 72).
#include<iostream>
#include"Sales_item.h"
using namespace std;

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
				total += trans;
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