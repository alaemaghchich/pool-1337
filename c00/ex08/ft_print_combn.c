#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}

void print_arr(int n , int arr[]){
 int i = 0;
 while (i < n){
    ft_putchar(arr[i] + '0');
    i++;
 }
 if(arr[0] != (10 - n)){
    ft_putchar(',');
    ft_putchar(' ');
 }
}


void ft_print_combn(int n){
if(n <= 0 || n >= 10){
    return;
}
int arr[n];
int i = 0;
while(i < n){
    arr[i] = i;
    i++;
}
    print_arr(n, arr);
while(arr[0] != 10-n){
    i= n -1;
    while(i > 0 && arr[i] == 10 - (n-i)){
        i--;
    }
    arr[i]++;
    int r = i + 1;
    while(r<n){
        arr[r] = arr[r - 1] + 1;
        r++;
    }
    print_arr(n,arr);
}
return; 
}
int main(){
    ft_print_combn(11);
}