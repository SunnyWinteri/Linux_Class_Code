#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	char *vector[] = {"test","123","abc",NULL};
	printf("call1:pid = %d, ppid = %d\n", getpid(), getppid());
	execvp("test", vector);
	printf("===== after calling =====\n");
	return 0;
}
