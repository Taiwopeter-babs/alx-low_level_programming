# Fundamentals of Pointers, Arrays, and Strings

- Pointers: pointers and arrays, pointers and functions
- Arrays: Arrays, addresses, and functions
- Strings: Manipulating strings

## Documentation for function in file: [__104-print_buffer.c__](https://github.com/Taiwopeter-babs/alx-low_level_programming/blob/4b5c819aa947b5f353c0a8ce1d1b759ca1b4b790/0x06-pointers_arrays_strings/104-print_buffer.c)

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

see [__104-main.c__](https://github.com/Taiwopeter-babs/alx-low_level_programming/blob/db9a3c1e561918c7e0b0ef91336a07c15d79b540/0x06-pointers_arrays_strings/104-main.c) for *implementation*
