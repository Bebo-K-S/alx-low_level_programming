#include "main.h"

char *move_past_star(char *s2);
int wildcmp(char *s1, char *s2);
int inception(char *s1, char *s2);

/**
 * move_past_star - This function iterates past astersiks
 *
 * @s2: The second string that can contain wildcard.
 *
 * Return: The pointer past astrisks.
*/

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * wildcmp - A function that comapres two strings lexicographically.
 *
 * @s1: The first string.
 * @s2: The second string could contain wildcards.
 *
 * Return: 1 if identical otherwise 0.
*/

int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);

	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}

/**
 * inception - Makes magic a reality.
 *
 * @s1: The first string.
 * @s2: The second string could contain wildcard.
 *
 * Return: 1 if identical otherwise 0.
*/

int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);

	ret += inception(s1 + 1, s2);

	return (ret);
}
