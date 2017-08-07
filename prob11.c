#include <stdio.h>
main()
{
	int n[5],s,i,j,w;

	for(i=0; i<5; i++)
	{
		printf("Enter any integer: ");
		scanf("%d",&(n[i]));
		s = 0;
		for(j=1; j<=1; j++)
			if(n[j] < n[s])
			s = j;
		w = n[i]; /* swap smallest with current */
		n[i] = n[s];
		n[s] = w;
	}
	for (i = 0; i<5; i++)
		printf("%d\n",n[i]);
}

/* This program compiles but does not perform the proper task.
This program should sort the numbers one after another.
Is this a simple bug or is there a design flaw?

ANSWER: The flaw here is that the design only flips in certain places. 
Like if the number before was smaller it would flip. But if it needs to 
flip with a number further down in the sequence, it will not find it.

*/ 
