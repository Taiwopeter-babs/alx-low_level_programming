#ifndef MAIN_H
#define MAIN_H

/* libraries */
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

/* prototypes */
ssize_t read_textfile(const char *filename, size_t letters);


#endif /* MAIN_H */
