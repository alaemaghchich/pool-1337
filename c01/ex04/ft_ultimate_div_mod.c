#include<unistd.h>
#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b){
int tmp = *a;
*a /= *b;
*b = tmp % *b;
}
/*int main(){
    int x = 10;
    int y = 3;

    ft_ultimate_div_mod(&x, &y);
    printf("div of x is %i\n mod of y is %i" , x , y);
}*/