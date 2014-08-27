#include <iostream>

using namespace std;

int main()
{
	int sumOfSquares = 0;
	int sum = 0;

	for(int i = 1; i <= 100; ++i)
	{
		sumOfSquares += i*i;
		sum += i;
	}

	cout << sum*sum - sumOfSquares << endl;

	return 0;
}
