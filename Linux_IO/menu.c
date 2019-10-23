#include "header.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

void menu(){	
	int choice; // 选项
	int fd;
	char buffer[MAX]; //写入缓冲区
	int	num;
	char* path = "/bin/ls";
	char* argv[4] = {"ls","-l","file1",NULL};
	while(1){
		printf("************************************\n");
		printf("0. 退出\n");
		printf("1. 创建新文件\n");
		printf("2. 写文件\n");
		printf("3. 读文件\n");
		printf("4. 修改文件权限\n");
		printf("5. 查看当前文件的权限\n");
		printf("************************************\n");
		printf("Please input your choice(0-5):");
		scanf("%d", &choice);
		switch(choice)
		{
			case 0: close(fd);exit(0);
			case 1: 
					fd = open("file1",O_RDWR | O_TRUNC | O_CREAT, 0750);
					if(fd == -1)
						perror("open");
					else
						printf("Create File Success!\n");
					break;
			case 2:
					num = read(0, buffer, MAX);
					write(fd, buffer, num);
					break;
			case 3:
					read(fd,buffer,MAX);
					write(1,buffer,num);
					break;
			case 4:
					chmd();
					printf("Change Mode Success!\n");
					break;
			case 5:
					execv(path, argv);
					break;
			default:
					printf("Please input choice between 0 and 5 !");
		}
	}
}
