#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned long long int sum = 2;

	for(int i = 3; i < 2000000; ++i)
	{
		bool prime = true;
		int j = 2;
		while(prime && j < (int)sqrt((double)i)+1)
		{
			if(i%j == 0)
			{
				prime = false;
			}
			j++;
		}

		if(prime)
		{
			sum += i;
		}
	}

	cout << sum << endl;

	return 0;
}
