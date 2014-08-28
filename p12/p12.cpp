#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int ans = 1;

	int n = 1;

	int divisors = 0;

	while(true)
	{
		divisors = 0;

		for(int i = 1; i <= (int)sqrt((double)ans); ++i)
		{
			if(ans%i == 0)
			{
				divisors+=2;
			}
		}

		if(divisors > 500)
		{
			break;
		}

		n++;
		ans = 0;
		for(int j = n; j >= 1; --j)
		{
			ans += j;
		}
	}

	cout << ans << endl;

	return 0;
}
