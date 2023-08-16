/**
 * print_alphabet - writes the alphabet using _putchar function
 * @c: The character to print
 *
 * Return: 0 always success.
 * 
 */
void print_alphabet(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{            
		_putchar(ch);
 	}
		_putchar('\n');
}
