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

4-add.c uses __POINTER__ notation to access the elements and substrings:

```c
int main(int argc, char **argv)
{
	
}
```
testadd.c applies __ARRAY__ method of accessing elements:

```c
int main(int argc, char *argv[])
```

