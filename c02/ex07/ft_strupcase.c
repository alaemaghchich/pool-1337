#include<unistd.h>


char	*ft_strupcase(char *str)
{
int i = 0;
while(str[i])
{
    if(str[i] >= 'a' && str[i] <= 'z'){
        str[i] -= 32;
    }
    i++;
}
return str;
}
int main(){
    char str[] = "hello 1337";
    ft_strupcase(str);
}
