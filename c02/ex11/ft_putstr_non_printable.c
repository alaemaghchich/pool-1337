#include <unistd.h>

void ft_putchat(char c){
	write(1,&c,1);
}

void ft_print_hex(unsigned char str){
	char hex[] = "0123456789abcdef";
	ft_putchat('\\');
	ft_putchat(hex[str / 16]);
	ft_putchat(hex[str % 16]);
}

void ft_putstr_non_printable(char *str){
	while(*str){
		if(*str >= 32 && *str <= 126){
			ft_putchat(*str);
		}else{
			ft_print_hex(*str);
		}
		str++;
	}
}
int main(){
	char str[] = "Couc\noutu vas bien ?";
	ft_putstr_non_printable(str);
}
