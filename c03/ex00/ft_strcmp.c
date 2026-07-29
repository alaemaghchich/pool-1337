#include<unistd.h>;
int ft_strcmp(char *s1, char *s2){
    while(*s1 && *s2 && *s1 == *s2){
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
int main(){
    if(ft_strcmp("alae" , "alae") == 0){
        write(1,"0\n", 2);
    }else{write(1,"1\n", 2);}
}