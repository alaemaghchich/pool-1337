#include <unistd.h>

void    ft_putchar(char c){
    write(1,&c,1);
}

int ft_strlen(char *str){
    int len = 0;
    while(str[len]){
        len++;
    }
    return len;
}

int    check_double(char *base){
    int i = 0;
    int j;
    while(base[i]){
        j = i + 1;
        while(base[j]){
            if(base[i] == base[j]){
                return 1;
            }
            j++;
        }
        i++;
    }
} 

int     validation_base(char *base){
    int base_len = ft_strlen(base);
    int i = 0;
    while(check_double(base) == 1 || base[0] == '\0' || base_len <= 1 || base[i] == '+' || base[i] == '-'){
        return 1;
    }
    i++;
}

void    ft_putnbr_base(int nbr, char *base){
    if(validation_base(base) == 1){
        return;
    }
    int base_len = ft_strlen(base);
     if(nbr ==  -2147483648){
        write(1,"-2147483648" , 11);
     }
    
     if(nbr < 0){
        ft_putchar('-');
        nbr *= -1;
    }
    if(nbr >= base_len){
        ft_putnbr_base(nbr / base_len ,base);
    }
    ft_putchar(base[nbr % base_len]);
     
}

int main(){
    ft_putnbr_base(1337, "0123456789abcdef");
}
