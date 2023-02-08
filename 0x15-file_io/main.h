#ifndef _main_h
#define _main_h

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* 3-cp.c function prototypes */
int open_file_from(char *file_from);
void close_fd(int fd);
int open_file_to(char *file_to, int fd_from);
void exit_safe(int fd_from, int fd_to, int status);

#endif
