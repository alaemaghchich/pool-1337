#include<unistd.h>
#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
    int i = 0;
    while(src[i] != '\0' && i<n){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
int main(){
    char src[] = "salam 3alykom";
    char dest[20];
    int n = 10;
    ft_strncpy(dest, src, n);
}