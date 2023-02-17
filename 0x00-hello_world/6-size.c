#include <stdio.h>
/**
 * main - Print out sizes of data sizes in C
 * return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char:%lu byte(s)\n".
(unsigned long)sizeof(a));
printf("size of an int:%lu byte(s)\n".
(unsigned long)sizeof(b));
printf("size of a long int:%lu byte(s)\n".
(unsigned long)sizeof(c));
printf("size of a long long int:%lu byte(s)\n".
(unsigned long)sizeof(d));       
printf("size of a float:%lu byte(s)\n".
(unsigned long)sizeof(f));
}
				
