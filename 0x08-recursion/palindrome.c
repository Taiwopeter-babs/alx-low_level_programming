#include <stdio.h>

int check_pal(char *s, char *rev);
int stringlen(char *s);

/*
char *rev_string(char *s)
{
	int i, len;
	char *first_ch, *last_ch;
	char ch; 
 */

	/* length of string to keep track */
	/* len = strlen(s); */

	/* set the first_ch and last_ch to the beginning of the string */
	/* first_ch = s;
	 *  last_ch = s; 
	 */

	/* take the *last_ch to the end of the string */
	
	/*for (i = 0; i < len; i++)
	 *	last_ch++;
	 */

	/**
	 * swap the characters of first_ch and last_ch through a 
	 * limit of 1/2 of the string length
	 * then move back from last_ch and move forward from first_ch
	 */
	
	/*for (i = 0; i < len / 2; i++)*/
	/*{
		ch = *last_ch;
		*last_ch = *first_ch;
		*first_ch = ch;

		last_ch--;
		first_ch++;
	}
	return (s);
}
	 */

/**
 * stringlen - computes the length of the string
 * @s: string parameter/argument
 *
 * Return: integer length
 */
int stringlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string parameter
 *
 * Decsription: This function gets the length of a string s
 * then defines string pointer to set the starting position
 * the reversed pointer is moved to the last char of the string
 * then calls check_pal function
 *
 * Return: result from check_pal
 */
int is_palindrome(char *s)
{
	int i;
	int len = stringlen(s);

	char *reversed = s;
	char *normal = s;

	for (i = 0; i < len - 1; i++)
		reversed++;
	
	
	return check_pal(normal, reversed);
}

int check_pal(char *normal, char *reversed)
{
	if (*normal == '\0')
	{
		return (1);
	}
	if (*normal == *reversed)
	{
		return check_pal(++normal, --reversed);
	}

	else
	{
		if (*normal != *reversed)
		{
			return (0);
		}

		else
		{
			return (check_pal(++normal, --reversed));
		}
	}

}


int main(void)
{
	char *s = "lol";
	int p;

	p = is_palindrome(s);
	printf("%d\n", p);
	return (0);
}
