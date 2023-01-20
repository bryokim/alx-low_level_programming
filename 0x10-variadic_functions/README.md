# 0x10-variadic_functions
Contains source files with variadic functions

## variadic_functions.h
Contains prototypes of functions below.

## 0-sum_them_all.c
Contains function that returns the sum of all its parameters.
Prototype:
```C
int sum_them_all(const unsigned int n, ...);
```

## 1-print_numbers.c
Prints numbers, followed by anew line.
Prototype:
```C
void print_numbers(const char *separator, const unsigned int n, ...);
```
Where `separator` is string to be printed between numbers.

## 2-print_strings.c
Prints strings followed by new line.
Prototype:
```C
void print_strings(const char *separator, const unsigned int n, ...);
```
Where `separator` is string to be printed between two strings.

## 3-print_all.c
Prints anything.
```C
void print_all(const char * const format, ...);
```
Where `format` is a list of arguments passed to the function
* `c`: `char`
* `i`: `integer`
* `f`: `float`
* `s`: `char *`(If the string is NULL, `(nil)` is printed.
Any other char is ignored.
