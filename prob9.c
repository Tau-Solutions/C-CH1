#include <stdio.h>

int main()
{
	long num, temp, digit;
	long sum = 0;

	printf("Please enter a number to sum the digits\n");
	scanf("%ld", &num);
	temp = num;

	while(num > 0)
	{
		digit = num % 10; /* variable called digit cuz it get last 
							digit	*/
		sum = sum + digit;
		num /= 10;
		
	}

	printf("The initial number = %ld\n", temp);
	printf("Sum of the digits is %ld = %ld\n", temp, sum);
	return 0;
}
