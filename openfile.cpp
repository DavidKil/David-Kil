#include <stdio.h>
#include <string.h>

int main()
{
  FILE *in;
  char c, sort[5][20], temp[20];
  int i=0,j=0,k;
  
  
  in = fopen("test.txt", "r");
  if(in != NULL)
  {
    while((c = fgetc(in)) != EOF)
	{
		j=0;
		while (c != '\n')
		{
			sort[i][j] = c;
			j++;
			c=fgetc(in);
		
		}
		i++;

	}
	


for (k=0; k< 5; k++) //  2 'for' loops to cycle through the array to arrange the words alphabetically
	{
		for (i=0; i<5; i++)  
		{
			
			if (strcmp(sort[i], sort[i+1]) > 0)
			{		
				strcpy (temp, sort[i]);    // sorting the arguements using the bubble sort algorithm
				strcpy (sort[i], sort[i+1]);
				strcpy (sort[i+1], temp);
								
			}
		}
	}





for (i=0; i < 5; i++)
{
	printf("AFTER: %s \n", sort[i]); // print statement showing final arrangement of words
}


  fclose(in);
  }
  else printf("Unable to open file");
  
  return 0;
}








/*
  if(in != NULL)
  {
    while((c = fgetc(in)) != EOF) putchar(c);
    
    fclose(in);
  }
  else printf("Unable to open file");
  
  return 0;
}


*/