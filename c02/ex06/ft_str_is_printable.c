#include<unistd.h>

int ft_str_is_printable(char *str){
    int i = 0;
    while(str[i]){
        if(!(str[i] >= 32&& str[i] <= 126)){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
    ft_str_is_printable("!@#$%^&*());"); // return 1
    ft_str_is_printable("‰ƒ†©");
}