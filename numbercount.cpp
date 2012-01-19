#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
int i=0,empty=0, count, number; 

char a[50];

gets(a);

if (a[1] == '\0' )
{
	printf("oops");
}
	for (number=0; number <= 9 ; number++)
	{
	
		count=0;
		for (i=0; i<50; i++)
		{
		 if (a[i] - '0' == number)
		 {
			empty = empty + 1; 
			count = count+1;
		 }
		}
		printf("%d occurs %d times \n", number, count);
	}

	


return 0;
}



