int isVowels(char c)
{
    if(c == 'a' || c == 'e' || c == 'o' || c == 'i' || c == 'u' 
        || c == 'A' || c == 'E' || c == 'O' || c == 'I' || c == 'U')
        {
            return (1);
        }
        return (0);
}
char* reverseVowels(char* s) {
    int li = 0;
    char tmp;
    while (s[li])
    {
        li++;
    }
    li -= 1;
    int fi = 0;
    
    while (fi < li)
    {
        if(isVowels(s[fi]) && isVowels(s[li]))
        {
            tmp = s[fi];
            s[fi] = s[li];
            s[li] = tmp;
            fi++;
            li--;
        }
        if(!isVowels(s[fi]))
        {
            fi++;
        }
        if(!isVowels(s[li]))
        {
            li--;
        }
    }
    return (s);
}
#include <stdio.h>
int main()
{
    char s[] = "IceCrUAm";
    reverseVowels(s);
    printf("%s\n", s);
}