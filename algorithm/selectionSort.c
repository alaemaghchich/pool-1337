#include<stdio.h>
int main(){
    int arr[]={4,8,1,9,0,3,2,5,7,6};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<len-1 ; i++){
        int min = i;
        for(int j = i + 1; j<len ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (int s = 0 ; s<len ; s++){
        printf("%i " , arr[s]);
    }
}