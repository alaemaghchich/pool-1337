#include<unistd.h>
int ft_strlen(char *str){
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}
int main(){
    printf("%i" , ft_strlen("hello world"));
}