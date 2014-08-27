#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned long long n = 600851475143;

	unsigned long long int factor = 0;

	unsigned long long int ans = 0;

	for(unsigned long long int i = 1; i <= n; ++i)
	{
		if(n%i == 0)
		{
			factor = n/i;
			bool prime = true;
			unsigned long long int j = 2;
			while(j < (int)sqrt((double)factor) && prime)
			{
				if(factor%j == 0)
				{
					prime = false;
				}
				j++;
			}

			if(prime)
			{
				ans = factor;
				break;
			}
		}

	}

	cout << ans << endl;

	return 0;
}
