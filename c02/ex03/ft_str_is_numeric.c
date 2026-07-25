#include<unistd.h>

int ft_str_is_numeric(char *str){
    int i = 0 ;
    while(str[i]){
        if(!(str[i] >= 48 && str[i] <= 57)){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
    char str[] = "1337";
    ft_str_is_numeric(str);
}