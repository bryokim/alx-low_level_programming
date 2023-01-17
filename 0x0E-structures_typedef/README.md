# 0x0E-structures_typedef
Contains source files making use of structures and a header file.

## dog.h
Has the definition of ```struct dog``` and type ```dog_t```
The following prototypes are also included:
```C
void init_dog(struct dog *d, char *name, float age, char *owner)
void print_dog(struct dog *d)
dog_t *new_dog(char *name, float age, char *owner)
void free_dog(dog_t *d)
```

## 1-init_dog.c
Initialize a variable of type ```struct dog```
Prototype:
```C
void init_dog(struct dog *d, char *name, float age, char *owner)
```

## 2-print_dog.c
Prints a ```struct dog```
Prototype:
```C
void print_dog(struct dog *d)
```

## 4-new_dog.c
Creates a new dog.
Prototype:
```C
dog_t *new_dog(char *name, float age, char *owner)
```

## 5-free_dog.c
Frees dogs.
Prototype:
```C
void free_dog(dog_t *d)
```