#include<unistd.h>

char *ft_strcat(char *dest, char *src){
int i = 0;
while(dest[i]){
    i++;
}
int j = 0;
while(src[j]){
    dest[i] = src[j];
    i++;
    j++;
}
return dest;
}
int main(){
    char dest[20] =  "hello";
    char src[] = "world";
    ft_strcat(dest, src);
}