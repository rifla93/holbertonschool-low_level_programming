#include "main.h"
#include <stdio.h>
#include <string.h>

void rev_string(char *s)
{
int len = strlen(s);
char tmp;

	for (int i = 0; i < len /2; i++)

	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	
	}




}
