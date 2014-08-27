#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int ans = 0;

	for(int i = 1; i < 1000; ++i)
	{
		for(int j = i; j < 1000; ++j)
		{
			int cSquared = i*i + j*j;
			int c = (int)sqrt((double)cSquared);
			if(c*c == cSquared || (c+1)*(c+1) == cSquared)
			{
				if(i+j+c == 1000)
				{
					cout << i << " " << j << " " << c << endl;
					ans = i*j*c;
				}
			}

		}
	}

	cout << ans << endl;

	return 0;
}
