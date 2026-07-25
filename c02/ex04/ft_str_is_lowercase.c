#include<unistd.h>

int ft_str_is_lowercase(char *str){
    int i = 0;
    while(str[i]){
        if(!(str[i] >= 'a' && str[i] <= 'z')){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
ft_str_is_lowercase("helloworld");//return 1
ft_str_is_lowercase("");//return 1
ft_str_is_lowercase("hello WORLD");//return 0
ft_str_is_lowercase("1337/42");//return 0
}