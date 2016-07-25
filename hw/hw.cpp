#include <iostream>

using namespace std;

int main()
{
	int loopNumber;
	int i;
	cout << "Enter countdown number: ";
		cin >> loopNumber;
	for (i = loopNumber; i != 0; i--)
		{
			cout << "i = " << i << endl;
		}
		cout << "Done now that i = " << i << endl;
		
		cin.get();
		system("pause");
		return 0;
} 