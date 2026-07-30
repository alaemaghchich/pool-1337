#include<unistd.h>
char *ft_strncat(char *dest, char *src, unsigned int nb){
    char *start = dest;
    while(*dest){
        dest++;
    }

    while(*src && nb > 0){
        *dest = *src;
        dest++;
        src++;
        nb--;
    }
    *dest = '\0';
    return dest;
}
int main(){
    char dest[20] = "hello ";
    char src[] = "world";
    ft_strncat(dest, src ,3);
}