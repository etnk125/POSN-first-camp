#include<stdio.h>
int main()
{
	unsigned int A,B,C;
	scanf("%u %u %u",&A,&B,&C);
	if(A+B+C!=100)
		printf("BUG");
	else
	{
		if(A>B&&A>C)
			printf("PAPER");
		else if(A<B&&B<C)
			printf("ROCK");
		else if(A==B||B==C||A==C)
			printf("I DON'T KNOW");
		else if(B>A&&B>C)
			printf("SCISSORS");
	}


}
