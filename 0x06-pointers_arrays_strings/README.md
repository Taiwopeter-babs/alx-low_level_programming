# Fundamentals of Pointers, Arrays, and Strings

- Pointers: pointers and arrays, pointers and functions
- Arrays: Arrays, addresses, and functions
- Strings: Manipulating strings

## Documentation for function *print_buffer(*b, int size) in __104-print_buffer.c__

```c

void print_buffer(char *b, int size)
{
	statements;
}

```

- The statements in the loop  from line __ln 20__:
```c     	
print("%08x:" i);   

```
The above statement prints the hexadecimal format of starting characters with max-width 8		    		       
- __ln21__: if the index of the character % 2 == 0, add space before printing
- __ln22__: if the index of the character < size, print the hexadecimal format with max-width 2
otherwise, print double space for the alignment 
- __ln28__: print space for the alignment of the characters.
