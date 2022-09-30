# Implementing **argc** and **argv[]** in C

- Passing arguments to the command-line
- Remove warnings due to unused variables from gcc compilation

```c

int main(int __attribute__((unused)) argc, char *argc[])
{
	...
}

```
