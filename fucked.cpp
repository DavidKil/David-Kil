#include <stdio.h>
//int main(int argc, const char *const *argv)
int linecounter();
int main()
{







printf("lines = %d\n", linecounter());


return 0;

}




int linecounter()
{

	// FILE *file = fopen(argv[1], "r"); /* Get filename from command line. */
FILE *arg_sort = fopen("test.txt", "r");

if (arg_sort)
{

int ch, prev = '\n' /* so empty files have no lines */;
int lines = 0;

	while ( (ch = fgetc(arg_sort)) != EOF ) /* Read all chars in the file. */
	{

		if ( ch == '\n' )
		{

		++lines; /* Bump the counter for every newline. */

		}

	prev = ch; /* Keep a copy to later test whether... */

	}

fclose(arg_sort);

	if ( prev != '\n' ) /* ...the last line did not end in a newline. */
	{

	++lines; /* If so, add one more to the total. */

	}


}

return(int lines);
}