#include<iostream>
#include<cstring>

int main()
{
	using namespace std;

	const char* state1 = "Florida";
	const char* state2 = "Kansas";
	const char* state3 = "Euphoria";

	int len = strlen(state2);

	for (int i = len; i >= 0; i--)
	{
		cout.write(state2,i);
		cout << endl;
	}


	cout << "DEcreasing loop index: ";
	for (int i = 0; i < len; i++)
	{
		cout.write(state2, i);
		cout << endl;
	}


	return 0;
}

