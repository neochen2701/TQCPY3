#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char str1[10];
    char str2[10];
    scanf("%s", str1);
    scanf("%s", str2);
	printf("%d\n", (int)strlen(str1));
	printf("%d\n", (int)strlen(str2));
	printf("%s\n", strcat(str1, str2));
	return 0;
}
