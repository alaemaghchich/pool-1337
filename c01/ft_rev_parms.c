#include<unistd.h>


int main(int argc, char **argv)
{
    char *tmp;
    int i = 1;
    int j = argc - 1;
    if(argc < 2)
    {
        write(1, "undifind\n", 9);
        return (1);
    }
    else
    {
        while (i < j) 
        {
            

            tmp = argv[i];
            argv[i] = argv[j];
            argv[j] = tmp;
            i++;
            j--;
        }
        i = 1;
        while(argv[i])
        {
            j= 0;
            while(argv[i][j])
            {
                write(1, &argv[i][j++],1);
            }
            write(1, " ", 1);
            i++;
        }
        write(1, "\n" , 1);
    }
}