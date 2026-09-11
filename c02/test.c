#include <unistd.h>

void ftputchar(char c)
{
    write(1, &c, 1);
}

int main(int argc , char *argv[])
{
    if(argc != 3)
    {
        return (0);
    }
    else
    {
        int i;
        int j = 1;
        while(argv[j])
        {
            i = 0;
            while (argv[j][i])
            {
                ftputchar(argv[j][i++]);
            }
            ftputchar(' ');
            j++;
        }
        
    }
}