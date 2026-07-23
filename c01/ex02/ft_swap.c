#include<unistd.h>
void ft_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
/*
int main(){
    int y =  5;
    int x = 10;
    ft_swap(&y, &x);
    printf("y is %i ; x is %i" , y, x);
}*/