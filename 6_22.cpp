//Write a function to swap two int pointers.

#include <iostream>

using namespace std;

void exchange( int *&p,  int *&q)
{
	int *temp;
	temp = p;
	p = q;
	q = temp;
}

int main()
{
	int *p, *q;
	int a = 5, b = 10;
	p = &a;
	q = &b;
	cout << *p << " " << *q << endl;
	exchange(p, q);
	cout << *p << " " << *q << endl;
}