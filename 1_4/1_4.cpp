#include <iostream>
#include <algorithm>

using namespace std;

int squared(int x) {
	x = x * x;
	return x;
}

void transformTo(int input_array[], int output_array[]) {
	for (int i = 0; i <11; i++) {
		cout << ' ' << input_array[i];
	}
	cout << '\n';

	// The function takes start and end positions of the
	// range on which we want to apply our function. It
	// also takes the starting position of our output
	// array and the function we want to apply to the array.
	transform(input_array, input_array + 11, output_array, squared);

	cout << "Output:";
	for (int i = 0; i <11; i++) {
		cout << ' ' << output_array[i];
		input_array[i] = output_array[i];
	}
	cout << '\n';
	cout << "New array values :";
	for (int i = 0; i < 11; i++) {
		cout << ' ' << input_array[i];
	}
	cout << '\n';
}

int main()
{
	int input_array[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int output_array[11];
	cout << "Input:";

	transformTo(input_array, output_array);

}