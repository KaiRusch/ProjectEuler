#include <iostream>

using namespace std;

int main()
{
	//The sum of the multiples
	int sum = 0;

	//The current multiples of 3 and 5
	int mul3 = 3;
	int mul5 = 5;

	//What all multiples must be smaller than
	int cap = 1000;

	//While one of the multiples is less than the cap
	while(mul3 < cap || mul5 < cap)
	{
		//If the multiple of 3 is less than the cap
		if(mul3 < cap)
		{
			//If it is not also a multiple of 5
			if(mul3%5!=0)
			{
				//Add it to the sum
				sum+=mul3;
			}
			//Add 3 to find the next multiple of 3
			mul3+=3;
		}
		//If the multiple of 5 is less than the cap
		if(mul5 < cap)
		{
			//Add it to the sum
			sum+=mul5;
			//Add 5 to find the next multiple of 5
			mul5+=5;
		}
	}

	//Print the sum
	cout << sum << endl;

	return 0;
}
