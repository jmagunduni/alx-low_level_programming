#include <stdlib.h>
#include "main.h"

/**
**string_nconcat - this function concatenates
*bytes of string to a different string
*@s1:the string to append to
*@s2: the string to concatenate from
*@n:total number of bytes from string 2
*to concatenate from string 1
*Return: this function returns a pointer
*of the resulting string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *pntr;
unsigned int cnt_i = 0;
unsigned int cnt_j = 0;
unsigned int len1  = 0;
unsigned int len2  = 0;

while (s1 && s1[len1])
len1++;

while (s2 && s2[len2])
len2++;

if (n < len2)
s = malloc(sizeof(char) * (len1 + n + 1));
else
s = malloc(sizeof(char) * (len1 + len2 + 1));

if (!s)
return (NULL);

while (cnt_i < len1)
{
pntr[cnt_i] = s1[cnt_i];
cnt_i++;
}

while (n < len2 && cnt_i < (len1 + n))
pntr[cnt_i++] = s2[cnt_j++];
