#include "my.h"

#define child 3
int main(){
	pid_t pid;
	for( int i = 0; i < child; i++){
		if(pid = fork() == 0)//判断是否为子进程
		{
			printf("子进程%d: %d\n",i+1,getpid());
			return 0; //结束子进程
		}
		waitpid(pid,NULL,WUNTRACED);// 等待当前子进程结束
	}
	printf("\n");
	printf("父进程:%d\n", getpid());
	return 0;
}
