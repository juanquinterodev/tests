#include "prototypes.h"
/**
* main - entry point of the program
* Return: return 0 if sucess
*/
int main(void)
{
	char *buffer = NULL, *argv[] = {"", NULL}, *token;
	size_t size = 0;
	int status, others, execcheck;
	signal(SIGINT, ctrlc);
	while (1)
	{
		write(1, "infinito $ ", 11);
		buffer = NULL;
		status = getline(&buffer, &size, stdin);
		if (status == -1)
		{
			perror("./shell");
			free(buffer);
			exit(-1);
		}
		token = strtok(buffer, " \n\t");
		exit_func(buffer);
		if (fork() == 0)
		{
		execcheck = execve(token, argv, NULL);
			if (execcheck == -1)
			{
			perror("./shell");
				free(buffer);
				exit(-1);
			}
		}
		else
		{
			wait(&others);
		}
		free(buffer);
	}
	return (0);
}
