#include<unistd.h>

char *ft_strcat(char *dest, char *src){
    char *start = dest;
while(*dest){
    dest++;
}
while(*src){
    *dest = *src;
    dest++;
    src++;
}
*dest = '\0';
return start;
}
int main(){
    char dest[20] =  "hello";
    char src[] = "world";
    ft_strcat(dest, src);
}