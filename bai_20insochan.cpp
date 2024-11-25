// bai_20insochan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "in so chan:\n";
	int n, tongsochan = 0, tongsole = 0;
	cout << "nhap so:"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % 2 == 0) {
			cout << n << "la so chan" << endl;
			tongsochan += i;
		}

		else {

			cout << "n" << "la so le";
			tongsole += i;
		}
	}
	cout << "\ntong so chan:" << tongsochan <<"\n";
	cout << "\ntong so le:" << tongsole <<"\n";
	return 0;
}
