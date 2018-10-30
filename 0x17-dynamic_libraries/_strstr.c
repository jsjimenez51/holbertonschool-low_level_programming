/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: target string to look for
 * Return: pointer to the begining of the located needle
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (*(haystack + i) != '\0')
	{
		j = 0;
		while (*(needle + j) != '\0')
			if (*(haystack + i + j) == *(needle + j))
				j++;
			else
				break;

		if (*(needle + j) == '\0')
			return (haystack + i);

		i++;
	}

	return ('\0');
}
