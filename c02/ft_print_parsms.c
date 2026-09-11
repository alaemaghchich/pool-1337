#include <unistd.h>

void ft_putchatr(char c)
{
    write(1, &c, 1);
}
int main(int argc, char **argv)
{
    int i = 1;
    int j;
    if (argc < 2)
    {
        write(1, "undifind\n", 9);
        return 1;
    }
    else 
    {
        
        while(argv[i])
        {
            j = 0;
            while(argv[i][j]){
            ft_putchatr(argv[i][j++]);
            }
            ft_putchatr(' ');
            i++;
        }
    }
    ft_putchatr('\n');
}