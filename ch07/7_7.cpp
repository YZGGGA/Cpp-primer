//Rewrite the transaction-processing program you wrote for the exercises in ¡ì 7.1.2 (p. 260) to use these new functions.

int main()
{
	Sales_data total;
	if (read(cin, total))
	{
		Sales_data trans;
		while (read(cin, trans))
		{
			if (total.isbn() == trans.isbn())
			{
				total = add(total, trans);
			}
			else
			{
				print(cout, total);
				total = trans;
			}

		}
		print(cout, total);

	}
	else
	{
		cerr << "No data!" << endl;
		return -1;
	}
	return 0;
}