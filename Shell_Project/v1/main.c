#include "main.h"

int main(int ac, char **argv)
{
	char *prompt = "(Eshell) $ ";
	char *lineptr, *token;
	char *lineptr_copy = NULL;
	char *delim = " \n";
	size_t n = 0;
	ssize_t nchars_read;
	int num_tokens, i;

	/* declaring void variables */
	(void)ac;

	/* create an infinite loop*/
	while (1)
	{
		printf("%s", prompt);
		nchars_read = getline(&lineptr, &n, stdin);
		/* check if the getline function failed or reached
		 * EOF or use CTRL + D */
		if (nchars_read == -1)
		{
			printf("Exiting shell....\n");
			return (-1);
		}

		/* Parsing process */
		lineptr_copy = malloc(sizeof(char) * nchars_read);
		if (lineptr_copy == NULL)
		{
			perror("tsh: memory allocation error");
			return (-1);
		}
		strcpy(lineptr_copy, lineptr);

		/* split the string (lineptr) into an array of words */
		token = strtok(lineptr, delim);
		/* determine how many tokens are there */
		while (token != NULL)
		{
			num_tokens++;
			token = strtok(NULL, delim);
		}
		num_tokens++;

		/* Allocate space to hold the array of tokens*/
		argv = malloc(sizeof(char *) * num_tokens);

		token = strtok(lineptr_copy, delim);

		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(token));
			strcpy(argv[i], token);

			token = strtok(NULL, delim);
		}
		argv[i] = NULL;

		/* execute the command */
		execmd(argv);
	}

	/*free up allocated memory*/
	free(lineptr);
	free(lineptr_copy);

	return (0);
}
