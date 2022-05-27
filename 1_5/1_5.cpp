#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	auto values = vector<int>{ 2,3,4,5,6,7,8,9,10,11,12 };
	auto results = vector<int>{};

	cout << "Input : ";
	for_each(values.begin(), values.end(), [](int number) { cout <<"\n" << number; });

	transform(values.begin(), values.end(), values.begin(), back_inserter(results), [](int number, int otherNumber) { return number * otherNumber; });
	
	cout << "\n\nOutput : ";

	for_each(results.begin(), results.end(), [](int number) { cout << "\n" << number; });
	return 0;

}