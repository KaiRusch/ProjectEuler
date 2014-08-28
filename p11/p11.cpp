#include <iostream>

using namespace std;

int main()
{
	int grid[20][20] = {0};

	for(int i = 0; i < 20; ++i)
	{
		for(int j = 0; j < 20; ++j)
		{
			int number = 0;
			cin >> number;
			grid[i][j] = number;
		}
	}

	int ans = 0;

	for(int i = 0; i < 20-4; ++i)
	{
		for(int j = 0; j < 20; ++j)
		{
			int product = 0;
			int horizontal = 1;
			if(j < 20-4)
			{
				for(int k = 0; k < 4; ++k)
				{
					horizontal*= grid[i][j+k];
				}
			}
			if(horizontal > product)
			{
				product = horizontal;
			}
			int vertical = 1;
			for(int k = 0; k < 4; ++k)
			{
				vertical*=grid[i+k][j];
			}
			if(vertical > product)
			{
				product = vertical;
			}
			int downDiagonal = 1;
			if(j < 20-4)
			{
				for(int k = 0; k < 4; ++k)
				{
					downDiagonal*= grid[i+k][j+k];
				}
			}
			if(downDiagonal > product)
			{
				product = downDiagonal;
			}
			int upDiagonal = 1;
			if(j < 20-4 && i > 3)
			{
				for(int k = 0; k < 4; ++k)
				{
					upDiagonal*= grid[i-k][j+k];
				}
			}
			if(upDiagonal > product)
			{
				product = upDiagonal;
			}

			if(product > ans)
			{
				ans = product;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
