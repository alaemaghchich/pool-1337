#include<unistd.h>
 
char *ft_strcapitalize(char *str){
int li_jay = 1;
char *c = str;
while(*c){
    if(li_jay == 1 && *c >= 'a' && *c <= 'z'){
        *c -= 32;
    }else if(li_jay == 0 && *c >= 'A' && *c <= 'Z'){
        *c += 32;
    }

    if(*c < 48 || (*c > 57 && *c < 65) || (*c > 90 && *c < 97) || *c > 122){
        li_jay = 1;
    }else{
        li_jay = 0;
    }
    c++;
}
return str;
}


int main(){
	char	str[] = " salut, comment tu vas ? 42mots quaRAnte-deux; cinquante+et+un";
	 ft_strcapitalize(str);
}