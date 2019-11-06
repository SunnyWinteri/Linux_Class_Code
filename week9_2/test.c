#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main(int argc, char* argv[]){
	printf("test:pid = %d, ppid = %d\n",getpid(), getppid());
	for(int i = 0; i < argc; i++)
		printf("test: %d : %s\n", i, argv[i]);
	printf("======test end=======\n");
	return 0;
}
