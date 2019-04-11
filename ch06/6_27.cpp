//Write a function that takes an initializer_list<int>
//and produces the sum of the elements in the list.

#include <iostream>

using namespace std;

int sum(initializer_list<int> li)
{
	auto theSum = 0;
	for (auto i = li.begin(); i != li.end(); ++i)
	{
		theSum += *i;
	}
	return theSum;
}

int main()
{
	cout << sum({ 1,2,3,4,5,6,7 }) << endl;
	return 0;
}