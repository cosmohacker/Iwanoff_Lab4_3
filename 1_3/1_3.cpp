#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include <map>

using namespace std;

multimap<string, pair<string, int>> studentContainer; // empty multimap container

// Function to print multimap elements
void print(multimap<string, pair<string, int>>& myPair)
{
	cout << "Surnames(Key)" << "\t\t" << "Names" << "\t\t" << "Namesake/With" << "\t" << "Note\n\n";
	for (auto pr : studentContainer)
	{
		pair<string, int> myPair = pr.second;

		if (studentContainer.count(pr.first)>1)
		{
		cout << myPair.first << "\t\t" << pr.first << "\t\t" << "true" << "\t\t" << myPair.second << '\n';
		}
		else
		{
			cout << myPair.first << "\t\t" << pr.first << "\t\t" << "false" << "\t\t" << myPair.second << '\n';
		}

		//cout << pr.first << "\t\t" << myPair.first << "\t\t" << "true" << "\t\t" << myPair.second << '\n';
	}
}

// Driver Code
int main()
{
	// Creating some pairs to be used
	// as keys
	pair<string, int> pair1, pair2, pair3, pair4, pair5, pair6, pair7, pair8, pair9;
	
	srand(time(NULL));

	pair1 = make_pair("Tkachenko", rand() % 100);
	pair2 = make_pair("Ponomarenko", rand() % 100);
	pair3 = make_pair("Kovalenko", rand() % 100);
	pair4 = make_pair("Kravchenko", rand() % 100);
	pair5 = make_pair("Polyshchuk", rand() % 100);
	pair6 = make_pair("Romanenko", rand() % 100);
	pair7 = make_pair("Melnychuk", rand() % 100);
	pair8 = make_pair("Petrenko", rand() % 100);
	pair9 = make_pair("Pavlenko", rand() % 100);


	studentContainer.insert(pair<string, pair<string, int>>("Andriy", pair1));
	studentContainer.insert(pair<string, pair<string, int>>("Georgiy", pair2));
	studentContainer.insert(pair<string, pair<string, int>>("Danylko", pair3));
	studentContainer.insert(pair<string, pair<string, int>>("Burian", pair4));
	studentContainer.insert(pair<string, pair<string, int>>("Heorhiy", pair5));
	studentContainer.insert(pair<string, pair<string, int>>("Kyrylo", pair6));
	studentContainer.insert(pair<string, pair<string, int>>("Andriy", pair7));
	studentContainer.insert(pair<string, pair<string, int>>("Georgiy", pair8));
	studentContainer.insert(pair<string, pair<string, int>>("Burian", pair9));

	// Calling print function
	print(studentContainer);

	return 0;
}
