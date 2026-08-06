#include <stdio.h>

int	ft_atoi(char *str){
int result = 0;
int sign = 1;

while(*str == ' ' || (*str >= 9 && *str <= 13)){
str++;
}

while(*str == '-' || *str == '+'){
	if(*str == '-'){
		sign *= -1;
	}
	str++;
}

while(*str >= '0' && *str <= '9'){
	result = result * 10 + (*str - 48);
	str++;
}
return result * sign;
}
int main(){
	char str[] = "  \n \t -----+1337hello42";
	printf("%d" , ft_atoi(str));
}