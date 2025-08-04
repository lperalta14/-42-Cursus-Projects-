#include <unistd.h>

void ft_printbits(int nbr)
{
    int mask = 128; // 2^7 para empezar con el bit más significativo
    while (mask > 0)
    {
        if (nbr >= mask)
        {
            write(1, "1", 1);
            nbr = nbr - mask;
        }
        else
            write(1, "0", 1);
        mask = mask / 2;
	}
}
 int main(void)
 {
 	int	a = 129;
 
 	ft_printbits(a);
 	return(0);
 }
