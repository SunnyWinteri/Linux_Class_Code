#include <stdio.h>
#include <time.h>
void init_daemon(void);  //守护进程初始化函数

int main()
{
	FILE *fp;
	time_t t;
	init_daemon(); //初始化为Daemon
	while(1) //无限循环，每隔10s向6-8.log写入运行状态
	{
		sleep(10); //睡眠10s
		if((fp = fopen("6-8.log", "a")) >= 0)
		{
			t = time(0);
			fprintf(fp, "守护进程还在运行， 时间是： %s", asctime(localtime(&t)));
			fclose(fp);
		}
	}
}
