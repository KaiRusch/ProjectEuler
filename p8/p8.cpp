#include <iostream>
#include <string>

using namespace std;

int main()
{
	string number = " ";
	cin >> number;

	unsigned long long ans = 0;

	for(int i = 0; i < number.size()-13; ++i)
	{
		unsigned long long int product = 1;
		for(int j = 0; j < 13; ++j)
		{
			product*= (number[i+j] - '0');
			if(product > ans)
				ans = product;
		}
	}

	cout << ans << endl;

	return 0;
}
