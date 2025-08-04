/*Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:*/
#include<stdio.h>
#include<stdlib.h>
int	   is_power_of_2(unsigned int n)
{
	return(!(n & (n-1)));
}

int main(int argc, char **argv)
{
	if(argc == 2)
		printf("%d\n",  is_power_of_2(atoi(argv[1])));
	return(0);
}
