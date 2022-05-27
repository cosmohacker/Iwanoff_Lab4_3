#include <iostream>
#include <iomanip>
#include "conio.h"
#include "tchar.h"
#include <vector>
using namespace std;

void doubled() {
	//All elements with odd values should be doubled

	vector<vector<int> > x =
	{
		{ {1}, {2}, {3} },
		{ {4}, {5}, {6} },
		{ {7}, {8}, {9} },
	};

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			string evenOdd = (x[i][j] % 2 == 0) ? "Even" : "Odd";

			cout << "Element at x[" << i << "][" << j << "] = " << x[i][j] << " [" << evenOdd << "] " << endl;

			if (x[i][j] % 2 != 0) {
				int doubled = x[i][j] * 2;
				//cout << x[i][j] << " is odd." << endl;
				cout << "Double of " << x[i][j] << " = " << doubled << endl;
			}

		}
	}
}

int main()
{
	doubled();
}