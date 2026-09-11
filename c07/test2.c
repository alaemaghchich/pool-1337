#include <stdio.h>
int lengthOfLastWord(char* s) {
int count =  0;
int i = 0;
int j;
while(s[i])
{
    i++;
}
j = i - 1;
while(j > 0 && s[j] == ' ')
{
    j--;
}
while (j >= 0 && s[j] != ' ' && ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))){
    count += 1;
    j--;
}
return count;
}
int main()
{
    printf("%d", lengthOfLastWord("Hello World"));
}