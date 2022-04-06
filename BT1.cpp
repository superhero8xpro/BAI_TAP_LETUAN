#include <iostream>
using namespace std;

int main()
{
	int a[6][8] =
	{
		{1,1,1,0,0,1,1,0},
		{1,0,0,1,0,1,0,1},
		{1,0,1,1,0,1,1,1},
		{0,1,1,0,1,1,0,1},
		{0,0,1,0,0,0,1,0},
		{0,1,1,1,0,0,1,1}
	};
	int b[6][5] =
	{
		{0,0,1,1,1},
		{1,0,1,0,0},
		{0,1,1,1,0},
		{1,0,1,0,0},
		{1,1,0,1,0},
		{1,0,0,1,1}
	};
	int c[8] = { 1,0,1,0,1,0,0,1 };
	int* x = new int[100];
	int dem = 0;

	int co = 0;
	for (size_t x0 = 0; x0 < 2; x0++)
	{
		for (size_t x1 = 0; x1 < 2; x1++)
		{
			for (size_t x2 = 0; x2 < 2; x2++)
			{
				for (size_t x3 = 0; x3 < 2; x3++)
				{
					for (size_t x4 = 0; x4 < 2; x4++)
					{
						for (size_t x5 = 0; x5 < 2; x5++)
						{
							dem = 0;
							for (size_t i = 0; i < 8; i++)
							{
								if ((a[0][i] * x0 + a[1][i] * x1 + a[2][i] * x2 + a[3][i] * x3 + a[4][i] * x4 + a[5][i] * x5) % 2 == c[i])
								{
									dem++;
									if (dem == 8)
									{
										cout << "\n(a1,...,a6) = " << x0 << x1 << x2 << x3 << x4 << x5 << " --> ";
										cout << "(y1,...,y6) = ";
										for (size_t i = 0; i < 6; i++)
										{
											x[i] = (b[0][i] * x0 + b[1][i] * x1 + b[2][i] * x2 + b[3][i] * x3 + b[4][i] * x4 + b[5][i] * x5) % 2;
											cout << x[i];
										}
										cout << endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}