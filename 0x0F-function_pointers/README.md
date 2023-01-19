# 0x0F-function_pointers
Contains source code on function pointers

## 0-print_name.c
Prints a name.
Prototype:
```C
void print_name(char *name, void (*f)(char *));
```

## 1-array_iterator.c
Executes a function given as a parameter on each element of an array.
Prototype:
```C
void array_iterator(int *array, size_t size, void (*action)(int));
```

## 2-int_index.c
Searches for an integer in an integer array.
Prototype:
```C
int int_index(int *array, int size, int (*cmp)(int));
```

## calc
This is a program that performs simple operations.

Compilation:
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -o calc 3-main.c 3-op_functions.c 3-get_op_func.c
```
Usage: ```calc num1 operator num2```.
Where `num1` and `num2` are integers and `operator` is one of the following:
```
* `+`: Addition
* `-`: Subtraction
* `*`: Multiplication
* `/`: Division
* `%`: Modulo
```
Prints the result of the operation followed by a new line.

#### 3-main.c
Contains the main function.

#### 3-calc.h
Contains all the function prototypes and data structures used by
the program calc.

#### 3-op_functions.c
Contains the 5 functions for performing the operations named above.

#### 3-get_op_func.c
Contains the function that selects the correct function to perform operation
asked by the user.

## 100-main_opcodes.c
Prints the opcodes of its own main function in hexadecimal.
