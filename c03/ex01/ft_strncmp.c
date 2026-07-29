#include<unistd.h>
int ft_strncmp(char *s1, char *s2, unsigned int n){
    int i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1){
        i++;
    }
    return s1[i] - s2[i];
}


int main(){
    if(ft_strncmp("hel9o", "hell4", 4) == 0){
        write(1,"0\n",2);
    }else{
        write(1,"1\n",2);
    }
}