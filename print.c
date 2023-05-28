#include "factoring.h"
#include <math.h>
#include <string.h>
/**
 * fatorize_all - the function faciorize numbers.
 * @buff: poiter to the adress of the number.
 *
 * Return: print the n and return 0 Always (SUccess)
 */
int fatorize_all(char *buff)
{
	unsigned long long int n;
	unsigned long long int t;
	unsigned long long int len;

	len = strlen(buff);
	n = atoi(buff);
	if (len >= 25)
		printf("%llu=%f.*%f.\n",n, sqrt(n),sqrt(n));
	else
	for (t = 2; t < n; t++)
	{
		if (n % t == 0)
		{
			printf("%llu=%llu*%llu\n",n,n/t,t);
			break;
		}
	}
	return(0);
}
