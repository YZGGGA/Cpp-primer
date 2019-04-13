// Write a recursive function to print the contents of a vector

#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
	if (beg != end) {
		cout << *beg << " ";
		print(next(beg), end);
	}
}

int main()
{
	vector<int>vet{ 1,2,3,4,5,6,7,8,9 };
	print(vet.begin(), vet.end());
	return 0;
}