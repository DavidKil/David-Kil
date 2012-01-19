#include <stdio.h>

int main(void)
{
FILE *argsort;
argsort = fopen("test.txt", "r");
char c;
char before[6][25];
int i,j=0;

while (1)
{

for (i=0; i < 4; i++)
	{
	fgets(before[i], 25, argsort);
	puts(before[i]);
	}
break;
}
fclose(argsort);

return 0;
}
