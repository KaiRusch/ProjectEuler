#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n = 1;
	int i = 3;

	while(n < 10001)
	{
		bool prime = true;
		int j = 2;
		while(prime && j < i)
		{
			if(i%j == 0)
			{
				prime = false;
			}
			j++;
		}
		
		if(prime)
		{
			n++;
		}
		++i;
	}

	cout << i-1 << endl; 

	return 0;
}
