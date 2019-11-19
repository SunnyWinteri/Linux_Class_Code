#include <unistd.h>
#include <signal.h>
#include <sys/param.h>
#include <sys/types.h>
#include <sys/stat.h>
void init_daemon(void)
{
	pid_t child1, child2;
	int i;
	child1 = fork(); // 1. 创建子进程，终止父进程
	if(child1 > 0)  //这是子进程，后台继续执行
		exit(0);
	else if
	{
		perror("创建子进程失败"); //fork失败，退出
	}
	setsid(); // 2. 在子进程中创建新会话
	chdir("/tmp");// 3. 改变工作目录到“/tmp”
	umask(0); // 4. 重设文件创建掩码
	for(i = 0; i < NOFILE; ++i) // 5. 关闭文件描述符
		close(i);
	return;
}
