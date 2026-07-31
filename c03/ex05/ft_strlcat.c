#include<unistd.h>

int ft_strlen(char *str){
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
     unsigned int dlen = ft_strlen(dest);
     unsigned int slen = ft_strlen(src);
     unsigned int i = 0;

     if(size <= dlen){
         return size + slen;
     }

     while(src[i] && dlen + i < size - 1){
        dest[dlen + i] = src[i];
        i++;
     }
     dest[dlen + i] = '\0';
     return dlen + slen;
}

int main(){
    char dest[20] = "hello ";
    char src[] = "world";
    char size = 10;
    int *p = ft_strlcat(dest, src, size);
    printf("%s" , dest);
    printf("%i" , p);
}