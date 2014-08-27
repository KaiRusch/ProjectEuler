#include <iostream>

using namespace std;

int main()
{

	int ans = 1;
	bool divisible = false;
	while(!divisible)
	{
		bool allDivisble = true;
		for(int i = 2; i <= 20; ++i)
		{
			if(ans%i != 0)
			{
				allDivisble = false;
				break;
			}
		}

		divisible = allDivisble;
		ans++;
	}

	cout << ans-1 << endl;

	return 0;
}
