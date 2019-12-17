#include <stdio.h>

int main()
{
	int div = 4;

	for (int i=1;i<=100;i++)
	{
		if (i%div==0)
		{
			printf("%d divides evenly by %d\n",i,div);
		}
	}
}
