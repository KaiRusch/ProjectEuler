#include <iostream>
#include <sstream>

using namespace std;

bool palindrome(int n)
{
	string number = " ";
	
	ostringstream convert;

	convert << n;

	number = convert.str();

	int halfLength = number.length()/2;

	for(int i = 0; i < halfLength; ++i)
	{
		if(number[i] != number[number.length()-i-1])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int ans = 0;	
	
	for(int i = 999; i >= 100; --i)
	{
		for(int j = i; j >= 100; --j)
		{
			int product = i*j;
			if(palindrome(product) && product > ans)
			{
				ans = product;
			}
		}
	}


	cout << ans << endl;

	return 0;
}
