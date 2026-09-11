#include <unistd.h>
#include <stdlib.h>
int check_sep(char c, char *charset)
{
    int i = 0;
    while(charset[i])
    {
        if(charset[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int calcul_words(char *str, char *charset)
{
    int i = 0;
    int count = 0;
    while(str[i])
    {
        while(str[i] && check_sep(str[i] , charset))
            i++;
        while(str[i] && !check_sep(str[i] , charset))
            i++;
        count++;
    }
    return (count);
}

char *ft_strdup(int end , int start , char *str)
{
    int size = end - start;
    char *s = malloc(sizeof(char) * (size + 1));
    if(s == NULL)
        return (NULL);
    int b = 0;
    while(b < size)
    {
        s[b] = str[start];
        start++;
        b++;
    }
    s[b] = '\0';
    return(s);
}
char **ft_split(char *str, char *charset)
{
    int end = 0, start = 0, n = 0;
    int count = calcul_words(str, charset);
    char **ser = malloc(sizeof(char *) * (count + 1));
    if(ser == NULL)
        return (NULL);
    while(str[end])
    {
        while(str[end] && check_sep(str[end] , charset))
            end++;
        start = end;
        while(str[end] && !check_sep(str[end] , charset))
            end++;
        if(start < end)
        {
            ser[n] =  ft_strdup(end, start , str);;
            n++;
        }
    }  
    ser[n] = NULL;
    return (ser);
}
int main()
{
    char str[] = "mouad,,latif;ana..student.f1337,,,  ";
    char charset[]= ",,.;";
    char **res = ft_split(str, charset);
    int i = 0, j = 0;
    while(res[i])
    {
        j = 0;
        while(res[i][j])
        {
            write(1,&res[i][j],1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    free(res);
}