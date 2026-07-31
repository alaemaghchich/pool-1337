#include<unistd.h>

char *ft_strstr(char *str, char *to_find){

if (to_find[0] == '\0'){
    return str;
}

int i = 0;
while(str[i]){
    int j = 0;
    while(str[j+i] && str[j+i] == to_find[j]){
        j++;
    }
    if(to_find[j] == '\0'){
        return &str[i];
    }
    i++;
}
return NULL;
}
int main(){
    char str[] = "hello world im alae";
    char *p  = ft_strstr(str, "alae");
    printf("%s" , p);
}