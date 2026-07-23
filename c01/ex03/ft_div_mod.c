#include<unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a/b;
    *mod = a%b;
}
/*
int main(){
    int a = 10;
    int b = 3;
    int div, mod;
    ft_div_mod(a,b,&div, &mod);
    printf("div : %i\n", div);
    printf("mod : %i", mod);

}*/