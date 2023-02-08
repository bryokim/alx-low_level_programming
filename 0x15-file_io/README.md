# 0x15-file_io

## 0-read_textfile.c

Reads a text file and prints it to the POSIX standard output.
Prototype:

```C
ssize_t read_textfile(const char *filename, size_t letters);
```

## 1-create_file.c

Creates a file.
Prototype:

```C
int create_file(const char *filename, char *text_content);
```

## 2-append_text_to_file.c

Appends text at the end of a file.
Prototype:

```C
int append_text_to_file(const char *filename, char *text_content);
```

## 3-cp.c

Copies the content of a file to another file.
Usage: `cp file_from file_to`.
