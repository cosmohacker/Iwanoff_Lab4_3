#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iostream>
#include <random>
#include <vector>
#include <chrono>
#include <string> 

class student {
	public:
	std::vector<std::string> surnames{ "Shevchenko", "Bondarenko","Kovalenko","Kovalchuk","Soroka","Serdyuk","Alekseenko","Chernyi","Bodnar","Panasyuk","Chernenko","Smyrnova","Babyi" };
	std::vector<int> v = std::vector<int>(13); // vector with 13 ints.
	std::vector<std::vector<std::string>> vec;
	int identity_number, student_notes;
	std::string students[13][3];
	std::string surname;

	void setData() {
		srand(time(0));
		auto seed = std::chrono::system_clock::now().time_since_epoch().count();//seed
		std::uniform_int_distribution<int> identity(10000, 50000);
		std::uniform_int_distribution<int> notes(70, 82);
		std::default_random_engine dre(seed);//engine

		std::generate(v.begin(), v.end(), [&] { return notes(dre); });
		// 	With an average score in the interval "75" – "81"
		for (int i = 0; i < 13; i++)
		{
			std::string random = surnames[rand() % surnames.size()];
			identity_number = identity(dre);
			student_notes = notes(dre);
			students[i][0] = random;
			students[i][1] = std::to_string(identity_number);
			students[i][2] = std::to_string(student_notes);
		}

		for (int i = 0; i < 13; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				std::cout << students[i][j] << ' ';
			}
			std::cout << std::endl;

		}

		std::cout << std::endl;

		for (int i = 0; i < 13; i++) {//creating row
			vec.push_back(std::vector<std::string>());
		}

		for (int n = 0; n < 3; n++) {//creating columns for the rows
			for (int m = 0; m < 13; m++) {
				vec[m].push_back("");
			}
		}

		for (int m = 0; m < 13; m++) {//storing and printing data
			for (int n = 0; n < 3; n++) {
				vec[m][n] = students[m][n];
			}
		}

		char filter;
		std::cout << "Sorting Selection :  	Alphabetically[1] : ";
		std::cin >> filter;

		switch (filter)
		{
		case '1':
			initialize();
			break;
		default:
			break;
		}
	}

	void initialize() {

		for (int m = 0; m < 13; m++) {
			for (int n = 0; n < 3; n++) {
				//vec[n].push_back(arr[m][n]);
				std::sort(vec.begin(), vec.end());
				std::cout << vec[m][n] << ' ';
			}
			std::cout << "\n";
		}
		std::cout << "\n";
	}
};

int main()
{
	student s;
	s.setData();
}