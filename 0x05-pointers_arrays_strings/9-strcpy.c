#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

int main(void){
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
