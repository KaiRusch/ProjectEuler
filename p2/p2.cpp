#include <iostream>

using namespace std;

int main()
{
	//The sum of the even numbers
	int sum = 0;

	//The first two fibonacci number
	int f1 = 1;
	int f2 = 1;

	//While the leading number is less than 4,000,000
	while(f2 < 4000000)
	{
		//If the leading number is even
		if(f2%2 == 0)
		{
			//Add it to the sum
			sum += f2;
		}

		//Go to the next two fibonacci numbers
		int temp = f2;
		f2 = f1 + f2;
		f1 = temp;
	}

	//Print the sum
	cout << sum << endl;

	return 0;
}
