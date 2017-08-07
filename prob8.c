
#include <stdio.h>
#include <math.h>


int main()
{
	
	int x;
	int  original;
	int test;
	int flag;
	int countUp = 0;
	int countDown = 0;

	printf("Enter a number\n");
	scanf("%d", &x);
	original = x; /*Leave this alone. Resets numbers to user input*/
	flag = isPerfSquare(x);

	if (flag == 1)
	{
		printf("%dThat number is a perfect square\n", x);
	}

	while (flag == 0)
	{
		countUp++;
		x += countUp;
		flag = isPerfSquare(x);

		if (flag == 1)
		{
			printf("%d is the closest number to a perfect square", x);
		}
		
		x = original;

		countDown++;
		x -= countDown;
		flag = isPerfSquare(x);

		if (flag == 1)
		{
			printf("%d is the closest number to a perfec sqaure", x);
		}

		x = original;
		
	}

	return 0;
}

int isPerfSquare(int s)
{
	int root;
	root = sqrt(s);

	if (s == root * root)
		return 1;
	else
		return 0;
}
