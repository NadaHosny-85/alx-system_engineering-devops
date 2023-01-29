#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

int main(void)
{
	int i;
	pid_t child_pro = 0;

	for (i = 0; i < 5; i++)
	{
		child_pro = fork();

		if (child_pro > 0)
			printf("Zombie process created, PID: %d\n", child_pro);
		else
			exit(0);

	}

	return (infinite_while());
}
