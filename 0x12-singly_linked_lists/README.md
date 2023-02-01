# 0x12-singly_linked_lists
Contains functions for list operations, namely:
- `printing a list`
- `finding length`
- `adding node at start`
- `adding node at end`
- `freeing a list`

This directory also contains two functions for specific operations not involving lists.
These functions are contained in the following source files:
- `100-first.c`
- `101-hello_holberton.asm`

The node being used is of type `list_t` defined in `lists.h` which also includes
function prototypes for the list functions.
```C
typedef struct list_s
{
        char *str;
        unsigned int len;
        struct list_s *next;
} list_t;
```
## List Functions Source Files
- ### 0-print_list.c
Prints all the elements of a `list-t` list.
```C
size_t print_list(const list_t *h);
```

- ### 1-list_len.c
Returns the number of elements in a linked `list_t` list.
```C
size_t list_len(const list_t *h);
```

- ### 2-add_node.c
Adds a new node at the beginning of a `list_t` list.
```C
list_t *add_node(list_t **head, const char *str);
```

- ### 3-add_node_end.c
Adds a new node at the end of a `list_t` list.
```C
list_t *add_node_end(list_t **head, const char *str);
```

- ### 4-free_list.c
Frees a `list_t` list.
```C
void free_list(list_t *head);
```

## Others
- ### 100-first.c
Prints some text before the start of the main function.
```C
void print_before_main(void);
```

- ### 101-hello_holberton.asm
64-bit assembly program that prints `Hello, Holberton`, followed by a new line.
