#include<unistd.h>


char *ft_strcpy(char *dest, char *src){
    int i = 0;
    while(dest[i] = src[i]){
        i++;
    }
    return dest;
}
int main(){
    char src[] = "hello world";
    char dest[20];
    ft_strcpy(dest, src);

}