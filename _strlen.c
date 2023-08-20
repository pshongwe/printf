/**
 * _strlen - calculates length of a string
 * @s: pointer to string
 *
 * Return: int length
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
