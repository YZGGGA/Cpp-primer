// Write your own versions of each of the print functions
// presented in this section. Call each of these functions to print i and j
// defined as follows:
// int i = 0, j[2] = {0, 1};

#include <iostream>

using namespace std;

void print(const int *p)
{
	cout << *p << endl;
}

void print(const int *beg, const int *end)
{
	while (beg != end)
	{
		cout << *beg++ << " ";
	}
	cout << endl;
}

void print1(int (&arr)[2])
{
	for (auto elem : arr)
	{
		cout << elem << " ";
	}
	cout << endl;
}

int main()
{
	int  i = 0, j[2] = { 0, 1 };
	print(&i);
	print(begin(j), end(j));
	print1(j);

}