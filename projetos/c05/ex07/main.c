#include <stdio.h>
int	ft_find_next_prime(int nb);
int main (void)
{
	int a = ft_find_next_prime (-2147483647);

	printf ("expected 2, found %d\n", a);
}
// #include <stdio.h>
// #include <limits.h>
// #include <time.h>

// int     ft_find_next_prime(int nb);

// int     main(void)
// {
//         int             i;
//         clock_t         time;
//         double          time_taken;
    
//         time = clock();

//         printf("\nooooo----------ooooo ex05 ooooo----------ooooo\n\n");
    
//         //i = 2147483647;
//         //i = -2147483648;
//         i = 23872;
//         //while (i <= 999)
//         //{
//         printf("i: %d next_prime = %d\n", i, ft_find_next_prime(i));
//                 //i++;
//         //}
//         //printf("INT_MAX:     = %d\n", INT_MAX);
    
//         time = clock() - time;
//         time_taken = ((double)time/CLOCKS_PER_SEC);
     
//         printf("\ntime taken = %f\n", time_taken);

//         printf("\nooooo----------ooooo !!!! ooooo----------ooooo\n\n");

//         return (0);
// }