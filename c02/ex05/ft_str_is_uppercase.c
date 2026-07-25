#include<unistd.h>

int ft_str_is_uppercase(char *str){
    int i = 0;
    while(str[i]){
        if(!(str[i] >= 'A' && str[i] <= 'Z')){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
ft_str_is_uppercase("1337/42");//return 0
ft_str_is_uppercase("HELLOWORLD");//return 1
ft_str_is_uppercase("");//return 1
ft_str_is_uppercase("HELLOworld");//return 0
}