#include "std_lib_facilities.h"

int main()
{
	vector<string>numbers = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	
	int inputnumber;
	
	cout << "Input any single algorism number\n";
	
	while (cin >> inputnumber)
	{
		if (inputnumber < 0 || inputnumber > 9)
		{
			cout << "Invalid input number.\n";
			keep_window_open();
			return 1;
		}

		cout << numbers[inputnumber] << "\n";
	}

	keep_window_open();
	return 0;
}