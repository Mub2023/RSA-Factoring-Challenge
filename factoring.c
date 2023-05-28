#include "factoring.h"
/**
 * fatorize_all - the function faciorize numbers.
 * @buff: poiter to the adress of the number.
 *
 * Return: print the n and return 0 Always (SUccess)
 */
int fatorize_all(char *buff)
{
	u_int32_t n;
	u_int32_t t;

	n = atoi(buff);

	for (t = 2; t < n; t++)
	{
		if (n % t == 0)
		{
			printf("%d=%d*%d\n",n,n/t,t);
			break;
		}
	}
	return(0);
}
