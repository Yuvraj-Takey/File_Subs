#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>

using namespace std;

#define STATUS_ERR -1
#define STATUS_SUC 0
#define INVALID_FD 0
#define ARG_LIMIT 2
#define MAXNAME	255
#define DIR_PERM 0777

