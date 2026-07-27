#include<unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size){
    unsigned int i;
    unsigned int len = 0;
    while(src[len]){
        len++;
    }
    if(size == 0){
        return len;
    }
    while(src[i] && i<size -1){
        dest[i] = src[i];
    }
    src[i] = '\0';
    return len;
}
int main(){
    char str[] = "hello";
    char dest[3];
    unsigned int len = ft_strlcpy(dest, str, 3);
    printf("%s\n",dest);
    printf("%i", len);
}