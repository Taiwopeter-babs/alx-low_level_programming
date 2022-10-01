# Implementing **argc** and **argv[]** in C

- Passing arguments to the command-line
- Remove warnings due to unused variables from gcc compilation

```c

int main(int __attribute__((unused)) argc, char *argc[])
{
	...
}

```

Two differently named source codes testadd.c & 4-add.c do the same thing i.e add integer arguments on command line.

[4-add.c](https://github.com/Taiwopeter-babs/alx-low_level_programming/blob/9dc2a3cbfa5c4c4d90215d3b5310ae67ea0649c8/0x0A-argc_argv/4-add.c) uses __POINTER__ notation to access the elements and substrings:

```c
int main(int argc, char **argv)
{
	
}
```
[testadd.c](https://github.com/Taiwopeter-babs/alx-low_level_programming/blob/e41152eb9fb9fbf4a5f522522c08c2f53e225a11/0x0A-argc_argv/testadd.c) applies __ARRAY__ method of accessing elements:

```c
int main(int argc, char *argv[])
{

}
```

