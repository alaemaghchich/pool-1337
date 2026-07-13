#include <stdio.h>
#include<unistd.h>

int main() {
    int arr[] = {9, 3, 1, 6, 8, 0, 2, 5, 4, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len -1; i++){
        for (int j = 0 ;j<len - i -1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    } 
for(int s = 0 ; s<len ; s++){
char c = arr[s] + '0';
write(1,&c,1);
write(1, " " , 1);
}
}