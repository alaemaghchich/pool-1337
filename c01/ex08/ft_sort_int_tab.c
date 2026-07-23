#include<unistd.h>
void ft_sort_int_tab(int *tab, int size){
    int i = 0;
    int li = size - 1;
    while(i<li){
        int j = 0;
        while(j< li - i){
            if(tab[j] > tab[j+1]){
                int tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
            j++;
        }
        i++;
    }
}
/*
int main(){
    int tab[] = {4,9,1,0,3,2,8,7,5,6};
    int size = 10;
    ft_sort_int_tab(tab, size);
    int i = 0;
    while(i<size){
        printf("%i", tab[i]);
        if(i!=9){
            write(1,", ",2);
        }
        i++;
    }
}*/
