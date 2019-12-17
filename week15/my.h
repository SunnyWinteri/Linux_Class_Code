#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <errno.h>
#include <sys/types.h>
#include <pthread.h>
#define LOOP 10000000
#define NUM 4
#define TN 100
#define WRITER_FIRST //宏定义，则写者优先；取消，则读者优先
