# 	Dynamic Memory Allocation

- Using malloc() & free()
- Checking memory leaks

## Use case of malloc() and free() functions
- Memory is a limited resource, therefore has to be managed efficiently.
  Dynamic allocation of memory is done using malloc function.
- In the [2-str_concat.c file](https://github.com/Taiwopeter-babs/alx-low_level_programming/blob/58f8b99a25be15e453233fcec7bfd5f86981384c/0x0B-malloc_free/2-str_concat.c), the function ```c str_concat ```, utilises helper functions ``` _strlen() ```, ``` _strcat ```, and ``` _strcpy ``` to concatenate two strings and pass the resuting string to a pointer, which points to a string.

- The memory allocation of the pointer variable is dynamic i.e it is based on the string literals present in both strings which determines the amount of bytes allocated to the resulting string in each condition.

For example, **ln 22-32**, both strings are NULL and are defined as empty strings. The memory allocated to the resulting new string is based on the length of the string generated from concatenating two empty strings. Parsing strings or values more than the allocated memory will result in memory leak.
