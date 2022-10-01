#include <iostream>

using namespace std;

int main()
{
	int input = 0, output = 0;
       bool isNegative = false;

	cout << "Enter a number: ";
	cin >> input;

	if (input < 0)
	{
		isNegative = true;
		input *= -1;
	}

	while (input != 0)
	{
		output = output * 10 + (input % 10);
		input /= 10;
	}

	if (isNegative)
		output *= -1;

	cout << "Output: " << output << endl;

}
 
