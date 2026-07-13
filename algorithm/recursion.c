#include<stdio.h>

 
void piramid(int n){
    if(n<0){
        return;
    }

    piramid(n-1);
    
    for(int x = 0 ; x < n ; x++){
        printf("[#]");
    }
    printf("\n");
}


int main(){
    int test;
    printf("enter number : ");
    scanf("%i", &test);
    piramid(test);
}
