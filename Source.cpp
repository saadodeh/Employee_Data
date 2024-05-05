#include <iostream>
#include "header.h"
using namespace std;
void binary(unsigned int n);
void octal(unsigned int n);
void assci(unsigned int n);
int main()
{
	int q, a;
	unsigned int n;
	cout << "I AM King\n";
	do {
		cout << "Enter a positive number:\n";
		cin >> n;
		cout << "----------------\n";
		cout << "1. BINARY       \n";
		cout << "2. OCTAL        \n";
		cout << "3. HEXADECIMAL  \n";
		cout << "----------------\n";
		cin >> q;
		if (q == 1)
		{
			binary(n);
		}
		else if (q == 2)
		{
			octal(n);
		}
		else if (q == 3)
		{
			assci(n);
		}
		cout << "----------------\n";
		cout << "4. EXIT         \n";
		cout << "5.CONTINUE      \n";
		cout << "----------------\n";
		cin >> q;
		if (q != 4 && q != 5)
		{
			cout << "THE VALUE IS INCORRECT\n";
		}
		if (q == 4)
		{
			cout << "GOOD BYE\n";
		}
		cout << "----------------------------\n";
	} while (q != 4);
}
void binary(unsigned int n)
{
	stack a;
	while (n)
	{
		int x = n % 2;
		a.push(x);
		n /= 2;
	}
	cout << a << endl;
}
void octal(unsigned int n)
{
	stack a;
	while (n)
	{
		int x = n % 8;
		a.push(x);
		n /= 8;
	}
	cout << a << endl;
}
void assci(unsigned int n)
{
	stack a;
	while (n)
	{
		int x = n % 16;
		if (x < 10) {
			a.push(x);
		}
		else {
			x += 55;
			a.push(x);
		}
		n /= 16;
	}
	cout << a << endl;
}