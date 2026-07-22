#include <stdio.h>
#include <string.h>


typedef struct{
    char *name;
    char *num;
}persone;

int main(){
    /*persone people[2];
    persone[0].name = "alae";
    persone[0].num = "0655454642";
    */
   /* persone people[] = {{.name = "alae", .num = "0655454642"}, {.name = "ahmed", .num = "0677051595"}}*/
   persone people[]= {{"alae", "0655454642"}, {"ahmed" , "0655454642"}};
   for(int i = 0 ; i < 2 ; i++){
    if(strcmp(people[i].name, "ahmd") == 0){
     printf("%s" , people[i].name);
     printf("is found in %i steps", i+1);
     printf(" his phone number is %s ", people[i].num);
     return 0;        
    }
   }
   printf("not found");
   return 1;
}