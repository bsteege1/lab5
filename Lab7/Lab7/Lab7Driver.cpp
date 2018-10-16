#include "Lab7MyStack.h"

int main()
{
	
	string test1;
	cout << "Enter a string for Test 1: " << endl;
	cin >> test1;
	cout << "The results of Test 1 are: " << stringReversal1(test1) << endl << endl;

	string test2;
	cout << "Enter a string for Test 2: " << endl;
	cin >> test2;
	cout << "The results of Test 2 are: " << stringReversal2(test2) << endl << endl;

	string test3;
	cout << "Enter a string for Test 3: " << endl;
	cin >> test3;
	cout << "The results of Test 3 are: " << stringReversal3(test3) << endl;

	system("pause");
	return 0;
}