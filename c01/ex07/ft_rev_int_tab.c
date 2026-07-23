#include<unistd.h>

void ft_rev_int_tab(int *tab, int size){
    int fi = 0;
    int li = size - 1;
    while(fi<li){
        int tmp = tab[fi];
        tab[fi] = tab[li];
        tab[li] = tmp;
        fi++;
        li--;
    }
}
/*
int main(){
    int tab[] = {0,1,2,3,4,5};
    int size = 6;
    ft_rev_int_tab(tab, size);
  int i = 0;
    while(i<size){
        printf("%i " , tab[i]);
        i++;
    }  
}*/