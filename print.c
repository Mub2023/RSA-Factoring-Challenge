#include "factoring.h"
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

	n = atoi(buff);

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
