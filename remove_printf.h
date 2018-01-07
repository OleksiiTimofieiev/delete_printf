#ifndef REMOVE_PRINTF_H
# define REMOVE_PRINTF_H

# define BUFF_SIZE 1

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
// check for the memory leaks
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <fcntl.h>
#include "read_functions.c"
#include "write_functions.c"
#include "string_functions.c"

#endif