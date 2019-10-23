#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
int chmd(){
	int c;
	printf(" 0. User Read \n 1. User Write \n 2. User Execute \n 3. User Read Write Execute \n");
	printf("Please input your choice(0-3):");
	scanf("%d",&c);
	switch(c)
	{
		case 0: chmod("file1", S_IRUSR);break;
		case 1: chmod("file1", S_IWUSR);break;
		case 2: chmod("file1", S_IXUSR);break;
		case 3: chmod("file1", S_IRWXU);break;
		default: printf("You have a wrong choice! \n");
	}
	return 0;
}
