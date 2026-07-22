#include<stdio.h>
int main(){
    int x[] = {1,2,3,4,5,6,7,8,9};
    int target = 4;
    int left = 0;
    int right = 8;
    while(left <= right){
        int middle = (left + right)/2;
        if (x[middle] == target){
            printf("target found it in %i", middle);
            return 0 ;
        }else if(x[middle] > target){
            right = middle - 1;
        }else{
            left = middle+1;
        }
    }
    printf("not found \n");
    return 1;
}